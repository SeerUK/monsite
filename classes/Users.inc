<?php

class Users {
	private $_name;
	private $_email;
	private $_password;
	private $_userId;

	public function __construct()
	{
		// Open connection to database 
		$db = database::getInstance();
		// Check if user existe 
		// If not return true
		// If yes return false
	}

	public function check()
	{
		$db = database::getInstance();

	}

	public function getName()
	{
		return $this->_name;
	}
	public function getEmail()
	{
		return $this->_email;
	}

	public function getPassword()
	{
		return $this->_password;
	}

	public function setName($name)
	{
		$this->_name = trim($name);
	}
	public function setEmail($email)
	{
		$this->_email = trim($email);
	}
	public function setPassword($password)
	{
		$this->_password = sha1($password);
	}

	public function setUserId($userId = null)
	{
		$this->_userId = uniqid($userId); 
	}

	public function getUserId()
	{
		return $this->_userId;
	}

}