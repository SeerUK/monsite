<?php

/*
*	Author : Nicolas Apoux
* 	
*	Singleton database connection
*	
*	
*	
*	
*/

require_once __DIR__ . '/../core/Config.inc';

class Database {
	private static $_instance = null;
	private $_db;



	private function __construct()
	{
		try{
			$this->_db = new PDO('mysql:host='.DB_HOST.';dbname='.DB_NAME, DB_USER, DB_PASS);
			$this->_db->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
			echo 'connected';
		}catch(PDOException $e) {
				exit('Error occured...'.$e->getMessage());
			}
	}
	/**
	 * [getInstance description]
	 * @return [connection] [description]
	 */
	public static function getInstance()
	{
		if(!isset(self::$_instance)) {
			self::$_instance = new Database();
		}
		return self::$_instance;
	}



	public function query()
	{
		
	}
}
