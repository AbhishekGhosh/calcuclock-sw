void displayPressedKey() {

	uint8_t k = readKeypad();

	while (k == NO_KEY)
		k = readKeypad();

	if (k<10) {

		segstates[0] = number[k];
		segstates[1] = 0;
		segstates[2] = 0;
		segstates[3] = 0;
		segstates[4] = 0;
		segstates[5] = 0;

	}

	if(k == KEY_DP) {

		segstates[0] = 0b01011110;
		segstates[1] = 0b01110011;
		segstates[2] = 0;
		segstates[3] = 0;
		segstates[4] = 0;
		segstates[5] = 0;

	}

	if(k == KEY_EQ) {

		segstates[0] = 0b01111001;
		segstates[1] = 0b01100111;
		segstates[2] = 0;
		segstates[3] = 0;
		segstates[4] = 0;
		segstates[5] = 0;

	}

	if(k == KEY_ADD) {

		segstates[0] = 0b01110111;
		segstates[1] = 0b01011110;
		segstates[2] = 0b01011110;
		segstates[3] = 0;
		segstates[4] = 0;
		segstates[5] = 0;

	}
	if(k == KEY_SUB) { //Display the text Sub

		segstates[0] = 0b01101101;
		segstates[1] = 0b00011100;
		segstates[2] = 0b01111100;
		segstates[3] = 0;
		segstates[4] = 0;
		segstates[5] = 0;

	}
	if(k == KEY_MUL) { //Display the text Tpl

		segstates[0] = 0b01111000;
		segstates[1] = 0b01110011;
		segstates[2] = 0b00111000;
		segstates[3] = 0;
		segstates[4] = 0;
		segstates[5] = 0;

	}
	if(k == KEY_DIV) { //Display the text Div

		segstates[0] = 0b01011110;
		segstates[1] = 0b00010000;
		segstates[2] = 0b00011100;
		segstates[3] = 0;
		segstates[4] = 0;
		segstates[5] = 0;

	}
	_delay_ms(2000);
}
