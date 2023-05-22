<html>
<head>
<title>Skrypcik w PHP</title>
</head>
<body>
<h1>PHP AND MySQL</h1>
<table border="1">
<tr>
    <th>id.os</th>
    <th>imie</th>
    <th>nazwisko</th>
</tr>
<form method = "post">
imie: <br />
<input type="text" name="imie" /> <br />
nazwisko: <br />
<input type="text" name="nazwisko" /> <br />
<input type="submit" value="dodaj" /> <br />
</form>
</body>
<?php


    $con = mysqli_connect("localhost", "root", "", "kandydaci");
    if ($con) echo "połączono"."<br>";
    else echo "nieudano polączyc";
    mysqli_select_db($con, "kandydaci");
    @$imie = $_POST['imie'];
    @$nazwisko = $_POST['nazwisko'];
    $ins = @mysqli_query($con,"INSERT INTO uczniowie (imie,nazwisko) VALUES ('$imie','$nazwisko')");
    if ($ins)
    echo "prawidlowo"."<br>";
    $result = mysqli_query($con,$ins);


      $query = "SELECT * FROM uczniowie";
      $result = mysqli_query($con,$query);

    while ($row = mysqli_fetch_array ($result))
    {
        echo "<tr>";
        echo "<td>".$row['id.os']."</td>";
        echo "<td>".$row['imie']."</td>";
        echo "<td>".$row['nazwisko']."</td>";
        echo "</tr>";
    }

?>
</table>
</html>
