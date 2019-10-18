
	var iIO uint32;
	var dIO float32;

	fmt.Scanf("%d", &iIO)
	fmt.Scanf("%f", &dIO)
	sIO, _ := scanner.ReadString('\n');

	fmt.Println(i+iIO)
	fmt.Println(fmt.Sprintf("%.1f", d+dIO))
	fmt.Println(s+sIO)
