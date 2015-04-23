<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
  <head>
      	<meta http-equiv="content-type" content="text/html; charset=utf-8" />
  		  <title>Registration page</title>
        <link rel="stylesheet" href="Styles/main.css">
    		<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.2/css/bootstrap.min.css">
    	<!-- Optional theme -->
    		<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.2/css/bootstrap-theme.min.css">
	</head>	
<body>
<div><?php include "../static.include/header.php" ?></div>
<?php 



require_once '../classes/Users.inc';
require_once '../classes/UsersProfile.inc';
require_once '../classes/Database.inc';
?>
<form action="../web/index.php" method="POST" class="form-inline">
          <div class="form-group">
          		<label class="sr-only" for="name">Name</label>
          		<input type="text" class="form-control" name="name" placeholder="Input field" />
          		<label class="sr-only" for="email">Email</label>
          		<input type="email" class="form-control" name="email" placeholder="Input field" />
          		<label class="sr-only" for="Password">Password</label>
              <input type="hidden" class="form-control" name="userid">
          		<input type="password" class="form-control" name="password" placeholder="Input field" />
          </div>
          		<button type="submit" name="submit" class="btn btn-primary">Submit</button>
        </form>
<?php




?>

<div><?php // include "../static.include/footer.php"; ?></div>
<!-- Latest compiled and minified JavaScript -->
		<script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.2/js/bootstrap.min.js"></script>
</body>
</html>