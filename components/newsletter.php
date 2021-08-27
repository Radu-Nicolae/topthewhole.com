<?php

$handle = fopen("databases/email.txt", "a");

fwrite($handle, $_POST["email"]);
fclose($handle);

?>