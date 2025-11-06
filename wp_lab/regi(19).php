<html>
<body>
<h1>Registration Form</h1>

<form action="" method="POST">
  Username: <input type="text" name="username"><br><br>
  Email: <input type="text" name="email"><br><br>
  Password: <input type="password" name="pass"><br><br>
  Confirm Password: <input type="password" name="cpass"><br><br>
  <input type="submit" value="Register">
</form>

<?php
// Run this only if the form is submitted
if ($_SERVER["REQUEST_METHOD"] == "POST") {

    // Check for empty fields
    if (empty($_POST['username']) || empty($_POST['pass']) || empty($_POST['email']) || empty($_POST['cpass'])) {
        echo "<p style='color:red;'>Please fill all required fields!</p>";
    }
    // Check password match
    elseif ($_POST['pass'] != $_POST['cpass']) {
        echo "<p style='color:red;'>Password and confirm password should match!</p>";
    }
    else {
        echo "<p style='color:green;'>Registration successful!</p>";
    }
}
?>
</body>
</html>

