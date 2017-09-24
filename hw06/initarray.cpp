void initArray(double array[50])
{
	/* array at index equals index squared */
	for (int i = 0; i < 25; i++) {
		array[i] = i * i;
	}
	/* array at index equals three times index */
	for (int i = 25; i < 50; i++) {
		array[i] = i * 3;
	}
}
