<html>
	<head>
		<title>osu! Automated Recent Activity Tweet</title>
		<link href="main.css" rel="stylesheet" type="text/css">
		<script src="../jquery-2.0.3.min.js" type="text/javascript"></script>
		<script src="main.js" type="text/javascript"></script>
		<script>
			window.onload = setTimeout(function() { window.location = "./index.php" }, 3000)
		</script>
	</head>
	<body>
		<div class="wrapper">
			<h1>osu! Automated Recent Activity Tweet</h1>
			<hr>
			<div class="hidden">
				<?php echo $content; ?>
			</div>
			<div class="footer">
				<?php include('footer.inc') ?>
			</div>
		</div>
	</body>
</html>