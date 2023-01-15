<?php

	$Nomor =$_POST['Nomor'];
	$Nama =$_POST['Nama'];
	$NISN =$_POST['NISN'];
	$Sekolah =$_POST['Sekolah'];
	$Tanggal =$_POST['Tanggal'];
	$Kota =$_POST['Kota'];
	$Alamat =$_POST['Alamat'];
	$Jenis_Kelamin =$_POST['Jenis_Kelamin'];
	$E_mail =$_POST['E_mail'];
	$Tempat =$_POST['Tempat'];

?>
<html>
	<head>
		<title>Pendafataran SMA/SMK 2021</title>
	</head>
	<body>
		<h1>Pendaftaran Peserta Didik Baru SMA/SMK 2020</h1>
		<?php
		echo "<p> Terimakasih ".$Nama."sudah mengisi form </p>";
		echo "<p> Nama : ".$Nama." </p>";
		echo "<p> No Pendaftaran : ".$Nomor." </p>";
		echo "<p> NISN : ".$NISN." </p>";
		echo "<p> Asal Sekolah : ".$Sekolah." </p>";
		echo "<p> Tanggal Lahir : ".$Tanggal." </p>";
		echo "<p> Jenis Kelamin : ".$Jenis_Kelamin." </p>";
		echo "<p> Kota/Kabupaten : ".$Kota." </p>";
		echo "<p> Alamat : ".$Alamat." </p>";
		echo "<p> No Telepon : ".$Tempat." </p>";
		echo "<p> E-mail : ".$E-mail." </p>";
		?>