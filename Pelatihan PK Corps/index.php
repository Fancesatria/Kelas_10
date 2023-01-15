<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
	<title>Formulir Pendaftaran Peserta Didik</title>
	<style type="text/css">
		.container{
			width: 30%;
			margin: auto;
			background-color: #FEFAFA;
			opacity :93%;
			border-radius: 30px;

		}	
		.judul{
			text-align: center;
			padding-top: 30px;
			font-family: comic sans ms;
		}
		.SMA{
			text-align: center;
			padding-top: 0px;
			font-family: comic sans ms;
		}
		table{
			margin: auto;
		}
		table td{
			padding-bottom: 20px;
		}
		button{
			background-color: lightblue;
			width: 50px;
			height: 30px;
			border-radius: 30px;

		}
	</style>
</head>
<body background="wallpaper-hd.jpg">
	<center>
		<div class="container">
			<h2 class="judul">Pendaftaran Peserta Didik Baru</h2>
			<h2 class="SMA">SMA/SMK 2021</h2>
				<form action="hasil.php" method="POST">	
					<table class="table">		
							<tr>
									<td>No Pendaftaran</td>
									<td>:</td>
									<td><input type="text" name="Nomor" placeholder="Nomor Pendaftaran" required></td>
								</tr>
								<tr>
									<td>Nama Lengkap</td>
									<td>:</td>
									<td><input type="text"  name="Nama" placeholder="Nama" required></td>
								<tr>
									<td>NISN</td>
									<td>:</td>
									<td><input type="text" name="NISN" placeholder="Masukan NISN" required></td>
								</tr>
								<tr>
									<td>Asal Sekolah</td>
									<td>:</td>
									<td><input type="text" name="Sekolah" placeholder="Asal Sekolah" required></td>
								</tr>
								<tr>
									<td>Tanggal Lahir</td>
									<td>:</td>
									<td><input type="date" name="Tanggal" placeholder="tt/mm/yy" required></td>	
								</tr>
								<tr>
									<td>Kota/Kabupaten</td>
									<td>:</td>
									<td name="Kota">
									<select>
										<option>--Pilih Kota--</option>
										<option>Surabaya</option>
										<option>Sidoarjo</option>
										<option>Malang</option>
										<option>Bekasi</option>
										<option>Bogor</option>
									</select></td>
								</tr>>
								<tr>
									<td>Alamat</td>
									<td>:</td>
									<td name="Alamat" required><textarea></textarea>
								</tr>
								<tr>
									<td>Jenis Kelamin</td>
									<td>:</td>
									<td>
									   <input type="radio" name="Jenis_Kelamin" >Laki-laki
									   <input type="radio" name="Jenis_Kelamin">Perempuan
									</td>
								</tr>
								<tr>
									<td>E-mail</td>
									<td>:</td>
									<td><input type="text" name="E_mail" placeholder="E-mail" required></td>
								</tr>
								<tr>
									<td>Nomor Handhone</td>
									<td>:</td>
									<td><input type="text" name="Tempat" placeholder="Nomor Handhone" required></td>
								</tr>
								<tr>
									<td> </td>
									<td> </td>
									<td>
										<button type="submit" name="Submit"> kirim </button>
									    <button type="reset" name="reset"> batal </button>
									    </td>
								</tr>
						</table>
				</form>
		</div>				
	</center>			

	
</body>
</html>


