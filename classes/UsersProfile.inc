<?php

class UsersProfile Extends Users {
	private $_companyName;
	private $_phone;


	public function __construct()
	{

	}

	public function getCompanyName()
	{
		return $this->_companyName;
	}

	public function getPhone()
	{
		return $this->_phone;
	}

	public function setCompanyName($companyName)
	{
		$this->_companyName = trim($companyName); 
	}

	public function setPhone($phone)
		{
			$this->_phone = trim($phone); 
		}

}