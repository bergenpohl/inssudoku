#include <stdint.h>
#include <unistd.h>

#include <time.h>
#include <stdio.h>

typedef enum	boolean_e {
	false,
	true
}					boolean_t;

void		print(char *board) {
	int i;
	
	i = 0;
	while (i < 81) {
		write(1, board + i, 9);
		write(1, "\n", 1);
		i += 9;
	}
}

boolean_t	valid(register char *board, register uint8_t index, register char c) {
	switch (index) {
		case 0:
			if (board[1] == c || board[9] == c || board[2] == c || board[18] == c || board[3] == c || board[27] == c || board[4] == c || board[36] == c || board[5] == c || board[45] == c || board[6] == c || board[54] == c || board[7] == c || board[63] == c || board[8] == c || board[72] == c || board[10] == c || board[11] == c || board[19] == c || board[20] == c) return false;
			return true;
		case 1:
			if (board[0] == c || board[10] == c || board[2] == c || board[19] == c || board[3] == c || board[28] == c || board[4] == c || board[37] == c || board[5] == c || board[46] == c || board[6] == c || board[55] == c || board[7] == c || board[64] == c || board[8] == c || board[73] == c || board[9] == c || board[11] == c || board[18] == c || board[20] == c) return false;
			return true;
		case 2:
			if (board[0] == c || board[1] == c || board[11] == c || board[20] == c || board[3] == c || board[29] == c || board[4] == c || board[38] == c || board[5] == c || board[47] == c || board[6] == c || board[56] == c || board[7] == c || board[65] == c || board[8] == c || board[74] == c || board[9] == c || board[10] == c || board[18] == c || board[19] == c) return false;
			return true;
		case 3:
			if (board[0] == c || board[1] == c || board[12] == c || board[2] == c || board[21] == c || board[30] == c || board[4] == c || board[39] == c || board[5] == c || board[48] == c || board[6] == c || board[57] == c || board[7] == c || board[66] == c || board[8] == c || board[75] == c || board[13] == c || board[14] == c || board[22] == c || board[23] == c) return false;
			return true;
		case 4:
			if (board[0] == c || board[1] == c || board[13] == c || board[2] == c || board[22] == c || board[3] == c || board[31] == c || board[40] == c || board[5] == c || board[49] == c || board[6] == c || board[58] == c || board[7] == c || board[67] == c || board[8] == c || board[76] == c || board[12] == c || board[14] == c || board[21] == c || board[23] == c) return false;
			return true;
		case 5:
			if (board[0] == c || board[1] == c || board[14] == c || board[2] == c || board[23] == c || board[3] == c || board[32] == c || board[4] == c || board[41] == c || board[50] == c || board[6] == c || board[59] == c || board[7] == c || board[68] == c || board[8] == c || board[77] == c || board[12] == c || board[13] == c || board[21] == c || board[22] == c) return false;
			return true;
		case 6:
			if (board[0] == c || board[1] == c || board[15] == c || board[2] == c || board[24] == c || board[3] == c || board[33] == c || board[4] == c || board[42] == c || board[5] == c || board[51] == c || board[60] == c || board[7] == c || board[69] == c || board[8] == c || board[78] == c || board[16] == c || board[17] == c || board[25] == c || board[26] == c) return false;
			return true;
		case 7:
			if (board[0] == c || board[1] == c || board[16] == c || board[2] == c || board[25] == c || board[3] == c || board[34] == c || board[4] == c || board[43] == c || board[5] == c || board[52] == c || board[6] == c || board[61] == c || board[70] == c || board[8] == c || board[79] == c || board[15] == c || board[17] == c || board[24] == c || board[26] == c) return false;
			return true;
		case 8:
			if (board[0] == c || board[1] == c || board[17] == c || board[2] == c || board[26] == c || board[3] == c || board[35] == c || board[4] == c || board[44] == c || board[5] == c || board[53] == c || board[6] == c || board[62] == c || board[7] == c || board[71] == c || board[80] == c || board[15] == c || board[16] == c || board[24] == c || board[25] == c) return false;
			return true;
		case 9:
			if (board[0] == c || board[10] == c || board[11] == c || board[18] == c || board[12] == c || board[27] == c || board[13] == c || board[36] == c || board[14] == c || board[45] == c || board[15] == c || board[54] == c || board[16] == c || board[63] == c || board[17] == c || board[72] == c || board[1] == c || board[2] == c || board[19] == c || board[20] == c) return false;
			return true;
		case 10:
			if (board[9] == c || board[1] == c || board[11] == c || board[19] == c || board[12] == c || board[28] == c || board[13] == c || board[37] == c || board[14] == c || board[46] == c || board[15] == c || board[55] == c || board[16] == c || board[64] == c || board[17] == c || board[73] == c || board[0] == c || board[2] == c || board[18] == c || board[20] == c) return false;
			return true;
		case 11:
			if (board[9] == c || board[2] == c || board[10] == c || board[20] == c || board[12] == c || board[29] == c || board[13] == c || board[38] == c || board[14] == c || board[47] == c || board[15] == c || board[56] == c || board[16] == c || board[65] == c || board[17] == c || board[74] == c || board[0] == c || board[1] == c || board[18] == c || board[19] == c) return false;
			return true;
		case 12:
			if (board[9] == c || board[3] == c || board[10] == c || board[11] == c || board[21] == c || board[30] == c || board[13] == c || board[39] == c || board[14] == c || board[48] == c || board[15] == c || board[57] == c || board[16] == c || board[66] == c || board[17] == c || board[75] == c || board[4] == c || board[5] == c || board[22] == c || board[23] == c) return false;
			return true;
		case 13:
			if (board[9] == c || board[4] == c || board[10] == c || board[11] == c || board[22] == c || board[12] == c || board[31] == c || board[40] == c || board[14] == c || board[49] == c || board[15] == c || board[58] == c || board[16] == c || board[67] == c || board[17] == c || board[76] == c || board[3] == c || board[5] == c || board[21] == c || board[23] == c) return false;
			return true;
		case 14:
			if (board[9] == c || board[5] == c || board[10] == c || board[11] == c || board[23] == c || board[12] == c || board[32] == c || board[13] == c || board[41] == c || board[50] == c || board[15] == c || board[59] == c || board[16] == c || board[68] == c || board[17] == c || board[77] == c || board[3] == c || board[4] == c || board[21] == c || board[22] == c) return false;
			return true;
		case 15:
			if (board[9] == c || board[6] == c || board[10] == c || board[11] == c || board[24] == c || board[12] == c || board[33] == c || board[13] == c || board[42] == c || board[14] == c || board[51] == c || board[60] == c || board[16] == c || board[69] == c || board[17] == c || board[78] == c || board[7] == c || board[8] == c || board[25] == c || board[26] == c) return false;
			return true;
		case 16:
			if (board[9] == c || board[7] == c || board[10] == c || board[11] == c || board[25] == c || board[12] == c || board[34] == c || board[13] == c || board[43] == c || board[14] == c || board[52] == c || board[15] == c || board[61] == c || board[70] == c || board[17] == c || board[79] == c || board[6] == c || board[8] == c || board[24] == c || board[26] == c) return false;
			return true;
		case 17:
			if (board[9] == c || board[8] == c || board[10] == c || board[11] == c || board[26] == c || board[12] == c || board[35] == c || board[13] == c || board[44] == c || board[14] == c || board[53] == c || board[15] == c || board[62] == c || board[16] == c || board[71] == c || board[80] == c || board[6] == c || board[7] == c || board[24] == c || board[25] == c) return false;
			return true;
		case 18:
			if (board[0] == c || board[19] == c || board[9] == c || board[20] == c || board[21] == c || board[27] == c || board[22] == c || board[36] == c || board[23] == c || board[45] == c || board[24] == c || board[54] == c || board[25] == c || board[63] == c || board[26] == c || board[72] == c || board[1] == c || board[2] == c || board[10] == c || board[11] == c) return false;
			return true;
		case 19:
			if (board[18] == c || board[1] == c || board[10] == c || board[20] == c || board[21] == c || board[28] == c || board[22] == c || board[37] == c || board[23] == c || board[46] == c || board[24] == c || board[55] == c || board[25] == c || board[64] == c || board[26] == c || board[73] == c || board[0] == c || board[2] == c || board[9] == c || board[11] == c) return false;
			return true;
		case 20:
			if (board[18] == c || board[2] == c || board[19] == c || board[11] == c || board[21] == c || board[29] == c || board[22] == c || board[38] == c || board[23] == c || board[47] == c || board[24] == c || board[56] == c || board[25] == c || board[65] == c || board[26] == c || board[74] == c || board[0] == c || board[1] == c || board[9] == c || board[10] == c) return false;
			return true;
		case 21:
			if (board[18] == c || board[3] == c || board[19] == c || board[12] == c || board[20] == c || board[30] == c || board[22] == c || board[39] == c || board[23] == c || board[48] == c || board[24] == c || board[57] == c || board[25] == c || board[66] == c || board[26] == c || board[75] == c || board[4] == c || board[5] == c || board[13] == c || board[14] == c) return false;
			return true;
		case 22:
			if (board[18] == c || board[4] == c || board[19] == c || board[13] == c || board[20] == c || board[21] == c || board[31] == c || board[40] == c || board[23] == c || board[49] == c || board[24] == c || board[58] == c || board[25] == c || board[67] == c || board[26] == c || board[76] == c || board[3] == c || board[5] == c || board[12] == c || board[14] == c) return false;
			return true;
		case 23:
			if (board[18] == c || board[5] == c || board[19] == c || board[14] == c || board[20] == c || board[21] == c || board[32] == c || board[22] == c || board[41] == c || board[50] == c || board[24] == c || board[59] == c || board[25] == c || board[68] == c || board[26] == c || board[77] == c || board[3] == c || board[4] == c || board[12] == c || board[13] == c) return false;
			return true;
		case 24:
			if (board[18] == c || board[6] == c || board[19] == c || board[15] == c || board[20] == c || board[21] == c || board[33] == c || board[22] == c || board[42] == c || board[23] == c || board[51] == c || board[60] == c || board[25] == c || board[69] == c || board[26] == c || board[78] == c || board[7] == c || board[8] == c || board[16] == c || board[17] == c) return false;
			return true;
		case 25:
			if (board[18] == c || board[7] == c || board[19] == c || board[16] == c || board[20] == c || board[21] == c || board[34] == c || board[22] == c || board[43] == c || board[23] == c || board[52] == c || board[24] == c || board[61] == c || board[70] == c || board[26] == c || board[79] == c || board[6] == c || board[8] == c || board[15] == c || board[17] == c) return false;
			return true;
		case 26:
			if (board[18] == c || board[8] == c || board[19] == c || board[17] == c || board[20] == c || board[21] == c || board[35] == c || board[22] == c || board[44] == c || board[23] == c || board[53] == c || board[24] == c || board[62] == c || board[25] == c || board[71] == c || board[80] == c || board[6] == c || board[7] == c || board[15] == c || board[16] == c) return false;
			return true;
		case 27:
			if (board[0] == c || board[28] == c || board[9] == c || board[29] == c || board[18] == c || board[30] == c || board[31] == c || board[36] == c || board[32] == c || board[45] == c || board[33] == c || board[54] == c || board[34] == c || board[63] == c || board[35] == c || board[72] == c || board[37] == c || board[38] == c || board[46] == c || board[47] == c) return false;
			return true;
		case 28:
			if (board[27] == c || board[1] == c || board[10] == c || board[29] == c || board[19] == c || board[30] == c || board[31] == c || board[37] == c || board[32] == c || board[46] == c || board[33] == c || board[55] == c || board[34] == c || board[64] == c || board[35] == c || board[73] == c || board[36] == c || board[38] == c || board[45] == c || board[47] == c) return false;
			return true;
		case 29:
			if (board[27] == c || board[2] == c || board[28] == c || board[11] == c || board[20] == c || board[30] == c || board[31] == c || board[38] == c || board[32] == c || board[47] == c || board[33] == c || board[56] == c || board[34] == c || board[65] == c || board[35] == c || board[74] == c || board[36] == c || board[37] == c || board[45] == c || board[46] == c) return false;
			return true;
		case 30:
			if (board[27] == c || board[3] == c || board[28] == c || board[12] == c || board[29] == c || board[21] == c || board[31] == c || board[39] == c || board[32] == c || board[48] == c || board[33] == c || board[57] == c || board[34] == c || board[66] == c || board[35] == c || board[75] == c || board[40] == c || board[41] == c || board[49] == c || board[50] == c) return false;
			return true;
		case 31:
			if (board[27] == c || board[4] == c || board[28] == c || board[13] == c || board[29] == c || board[22] == c || board[30] == c || board[40] == c || board[32] == c || board[49] == c || board[33] == c || board[58] == c || board[34] == c || board[67] == c || board[35] == c || board[76] == c || board[39] == c || board[41] == c || board[48] == c || board[50] == c) return false;
			return true;
		case 32:
			if (board[27] == c || board[5] == c || board[28] == c || board[14] == c || board[29] == c || board[23] == c || board[30] == c || board[31] == c || board[41] == c || board[50] == c || board[33] == c || board[59] == c || board[34] == c || board[68] == c || board[35] == c || board[77] == c || board[39] == c || board[40] == c || board[48] == c || board[49] == c) return false;
			return true;
		case 33:
			if (board[27] == c || board[6] == c || board[28] == c || board[15] == c || board[29] == c || board[24] == c || board[30] == c || board[31] == c || board[42] == c || board[32] == c || board[51] == c || board[60] == c || board[34] == c || board[69] == c || board[35] == c || board[78] == c || board[43] == c || board[44] == c || board[52] == c || board[53] == c) return false;
			return true;
		case 34:
			if (board[27] == c || board[7] == c || board[28] == c || board[16] == c || board[29] == c || board[25] == c || board[30] == c || board[31] == c || board[43] == c || board[32] == c || board[52] == c || board[33] == c || board[61] == c || board[70] == c || board[35] == c || board[79] == c || board[42] == c || board[44] == c || board[51] == c || board[53] == c) return false;
			return true;
		case 35:
			if (board[27] == c || board[8] == c || board[28] == c || board[17] == c || board[29] == c || board[26] == c || board[30] == c || board[31] == c || board[44] == c || board[32] == c || board[53] == c || board[33] == c || board[62] == c || board[34] == c || board[71] == c || board[80] == c || board[42] == c || board[43] == c || board[51] == c || board[52] == c) return false;
			return true;
		case 36:
			if (board[0] == c || board[37] == c || board[9] == c || board[38] == c || board[18] == c || board[39] == c || board[27] == c || board[40] == c || board[41] == c || board[45] == c || board[42] == c || board[54] == c || board[43] == c || board[63] == c || board[44] == c || board[72] == c || board[28] == c || board[29] == c || board[46] == c || board[47] == c) return false;
			return true;
		case 37:
			if (board[36] == c || board[1] == c || board[10] == c || board[38] == c || board[19] == c || board[39] == c || board[28] == c || board[40] == c || board[41] == c || board[46] == c || board[42] == c || board[55] == c || board[43] == c || board[64] == c || board[44] == c || board[73] == c || board[27] == c || board[29] == c || board[45] == c || board[47] == c) return false;
			return true;
		case 38:
			if (board[36] == c || board[2] == c || board[37] == c || board[11] == c || board[20] == c || board[39] == c || board[29] == c || board[40] == c || board[41] == c || board[47] == c || board[42] == c || board[56] == c || board[43] == c || board[65] == c || board[44] == c || board[74] == c || board[27] == c || board[28] == c || board[45] == c || board[46] == c) return false;
			return true;
		case 39:
			if (board[36] == c || board[3] == c || board[37] == c || board[12] == c || board[38] == c || board[21] == c || board[30] == c || board[40] == c || board[41] == c || board[48] == c || board[42] == c || board[57] == c || board[43] == c || board[66] == c || board[44] == c || board[75] == c || board[31] == c || board[32] == c || board[49] == c || board[50] == c) return false;
			return true;
		case 40:
			if (board[36] == c || board[4] == c || board[37] == c || board[13] == c || board[38] == c || board[22] == c || board[39] == c || board[31] == c || board[41] == c || board[49] == c || board[42] == c || board[58] == c || board[43] == c || board[67] == c || board[44] == c || board[76] == c || board[30] == c || board[32] == c || board[48] == c || board[50] == c) return false;
			return true;
		case 41:
			if (board[36] == c || board[5] == c || board[37] == c || board[14] == c || board[38] == c || board[23] == c || board[39] == c || board[32] == c || board[40] == c || board[50] == c || board[42] == c || board[59] == c || board[43] == c || board[68] == c || board[44] == c || board[77] == c || board[30] == c || board[31] == c || board[48] == c || board[49] == c) return false;
			return true;
		case 42:
			if (board[36] == c || board[6] == c || board[37] == c || board[15] == c || board[38] == c || board[24] == c || board[39] == c || board[33] == c || board[40] == c || board[41] == c || board[51] == c || board[60] == c || board[43] == c || board[69] == c || board[44] == c || board[78] == c || board[34] == c || board[35] == c || board[52] == c || board[53] == c) return false;
			return true;
		case 43:
			if (board[36] == c || board[7] == c || board[37] == c || board[16] == c || board[38] == c || board[25] == c || board[39] == c || board[34] == c || board[40] == c || board[41] == c || board[52] == c || board[42] == c || board[61] == c || board[70] == c || board[44] == c || board[79] == c || board[33] == c || board[35] == c || board[51] == c || board[53] == c) return false;
			return true;
		case 44:
			if (board[36] == c || board[8] == c || board[37] == c || board[17] == c || board[38] == c || board[26] == c || board[39] == c || board[35] == c || board[40] == c || board[41] == c || board[53] == c || board[42] == c || board[62] == c || board[43] == c || board[71] == c || board[80] == c || board[33] == c || board[34] == c || board[51] == c || board[52] == c) return false;
			return true;
		case 45:
			if (board[0] == c || board[46] == c || board[9] == c || board[47] == c || board[18] == c || board[48] == c || board[27] == c || board[49] == c || board[36] == c || board[50] == c || board[51] == c || board[54] == c || board[52] == c || board[63] == c || board[53] == c || board[72] == c || board[28] == c || board[29] == c || board[37] == c || board[38] == c) return false;
			return true;
		case 46:
			if (board[45] == c || board[1] == c || board[10] == c || board[47] == c || board[19] == c || board[48] == c || board[28] == c || board[49] == c || board[37] == c || board[50] == c || board[51] == c || board[55] == c || board[52] == c || board[64] == c || board[53] == c || board[73] == c || board[27] == c || board[29] == c || board[36] == c || board[38] == c) return false;
			return true;
		case 47:
			if (board[45] == c || board[2] == c || board[46] == c || board[11] == c || board[20] == c || board[48] == c || board[29] == c || board[49] == c || board[38] == c || board[50] == c || board[51] == c || board[56] == c || board[52] == c || board[65] == c || board[53] == c || board[74] == c || board[27] == c || board[28] == c || board[36] == c || board[37] == c) return false;
			return true;
		case 48:
			if (board[45] == c || board[3] == c || board[46] == c || board[12] == c || board[47] == c || board[21] == c || board[30] == c || board[49] == c || board[39] == c || board[50] == c || board[51] == c || board[57] == c || board[52] == c || board[66] == c || board[53] == c || board[75] == c || board[31] == c || board[32] == c || board[40] == c || board[41] == c) return false;
			return true;
		case 49:
			if (board[45] == c || board[4] == c || board[46] == c || board[13] == c || board[47] == c || board[22] == c || board[48] == c || board[31] == c || board[40] == c || board[50] == c || board[51] == c || board[58] == c || board[52] == c || board[67] == c || board[53] == c || board[76] == c || board[30] == c || board[32] == c || board[39] == c || board[41] == c) return false;
			return true;
		case 50:
			if (board[45] == c || board[5] == c || board[46] == c || board[14] == c || board[47] == c || board[23] == c || board[48] == c || board[32] == c || board[49] == c || board[41] == c || board[51] == c || board[59] == c || board[52] == c || board[68] == c || board[53] == c || board[77] == c || board[30] == c || board[31] == c || board[39] == c || board[40] == c) return false;
			return true;
		case 51:
			if (board[45] == c || board[6] == c || board[46] == c || board[15] == c || board[47] == c || board[24] == c || board[48] == c || board[33] == c || board[49] == c || board[42] == c || board[50] == c || board[60] == c || board[52] == c || board[69] == c || board[53] == c || board[78] == c || board[34] == c || board[35] == c || board[43] == c || board[44] == c) return false;
			return true;
		case 52:
			if (board[45] == c || board[7] == c || board[46] == c || board[16] == c || board[47] == c || board[25] == c || board[48] == c || board[34] == c || board[49] == c || board[43] == c || board[50] == c || board[51] == c || board[61] == c || board[70] == c || board[53] == c || board[79] == c || board[33] == c || board[35] == c || board[42] == c || board[44] == c) return false;
			return true;
		case 53:
			if (board[45] == c || board[8] == c || board[46] == c || board[17] == c || board[47] == c || board[26] == c || board[48] == c || board[35] == c || board[49] == c || board[44] == c || board[50] == c || board[51] == c || board[62] == c || board[52] == c || board[71] == c || board[80] == c || board[33] == c || board[34] == c || board[42] == c || board[43] == c) return false;
			return true;
		case 54:
			if (board[0] == c || board[55] == c || board[9] == c || board[56] == c || board[18] == c || board[57] == c || board[27] == c || board[58] == c || board[36] == c || board[59] == c || board[45] == c || board[60] == c || board[61] == c || board[63] == c || board[62] == c || board[72] == c || board[64] == c || board[65] == c || board[73] == c || board[74] == c) return false;
			return true;
		case 55:
			if (board[54] == c || board[1] == c || board[10] == c || board[56] == c || board[19] == c || board[57] == c || board[28] == c || board[58] == c || board[37] == c || board[59] == c || board[46] == c || board[60] == c || board[61] == c || board[64] == c || board[62] == c || board[73] == c || board[63] == c || board[65] == c || board[72] == c || board[74] == c) return false;
			return true;
		case 56:
			if (board[54] == c || board[2] == c || board[55] == c || board[11] == c || board[20] == c || board[57] == c || board[29] == c || board[58] == c || board[38] == c || board[59] == c || board[47] == c || board[60] == c || board[61] == c || board[65] == c || board[62] == c || board[74] == c || board[63] == c || board[64] == c || board[72] == c || board[73] == c) return false;
			return true;
		case 57:
			if (board[54] == c || board[3] == c || board[55] == c || board[12] == c || board[56] == c || board[21] == c || board[30] == c || board[58] == c || board[39] == c || board[59] == c || board[48] == c || board[60] == c || board[61] == c || board[66] == c || board[62] == c || board[75] == c || board[67] == c || board[68] == c || board[76] == c || board[77] == c) return false;
			return true;
		case 58:
			if (board[54] == c || board[4] == c || board[55] == c || board[13] == c || board[56] == c || board[22] == c || board[57] == c || board[31] == c || board[40] == c || board[59] == c || board[49] == c || board[60] == c || board[61] == c || board[67] == c || board[62] == c || board[76] == c || board[66] == c || board[68] == c || board[75] == c || board[77] == c) return false;
			return true;
		case 59:
			if (board[54] == c || board[5] == c || board[55] == c || board[14] == c || board[56] == c || board[23] == c || board[57] == c || board[32] == c || board[58] == c || board[41] == c || board[50] == c || board[60] == c || board[61] == c || board[68] == c || board[62] == c || board[77] == c || board[66] == c || board[67] == c || board[75] == c || board[76] == c) return false;
			return true;
		case 60:
			if (board[54] == c || board[6] == c || board[55] == c || board[15] == c || board[56] == c || board[24] == c || board[57] == c || board[33] == c || board[58] == c || board[42] == c || board[59] == c || board[51] == c || board[61] == c || board[69] == c || board[62] == c || board[78] == c || board[70] == c || board[71] == c || board[79] == c || board[80] == c) return false;
			return true;
		case 61:
			if (board[54] == c || board[7] == c || board[55] == c || board[16] == c || board[56] == c || board[25] == c || board[57] == c || board[34] == c || board[58] == c || board[43] == c || board[59] == c || board[52] == c || board[60] == c || board[70] == c || board[62] == c || board[79] == c || board[69] == c || board[71] == c || board[78] == c || board[80] == c) return false;
			return true;
		case 62:
			if (board[54] == c || board[8] == c || board[55] == c || board[17] == c || board[56] == c || board[26] == c || board[57] == c || board[35] == c || board[58] == c || board[44] == c || board[59] == c || board[53] == c || board[60] == c || board[61] == c || board[71] == c || board[80] == c || board[69] == c || board[70] == c || board[78] == c || board[79] == c) return false;
			return true;
		case 63:
			if (board[0] == c || board[64] == c || board[9] == c || board[65] == c || board[18] == c || board[66] == c || board[27] == c || board[67] == c || board[36] == c || board[68] == c || board[45] == c || board[69] == c || board[54] == c || board[70] == c || board[71] == c || board[72] == c || board[55] == c || board[56] == c || board[73] == c || board[74] == c) return false;
			return true;
		case 64:
			if (board[63] == c || board[1] == c || board[10] == c || board[65] == c || board[19] == c || board[66] == c || board[28] == c || board[67] == c || board[37] == c || board[68] == c || board[46] == c || board[69] == c || board[55] == c || board[70] == c || board[71] == c || board[73] == c || board[54] == c || board[56] == c || board[72] == c || board[74] == c) return false;
			return true;
		case 65:
			if (board[63] == c || board[2] == c || board[64] == c || board[11] == c || board[20] == c || board[66] == c || board[29] == c || board[67] == c || board[38] == c || board[68] == c || board[47] == c || board[69] == c || board[56] == c || board[70] == c || board[71] == c || board[74] == c || board[54] == c || board[55] == c || board[72] == c || board[73] == c) return false;
			return true;
		case 66:
			if (board[63] == c || board[3] == c || board[64] == c || board[12] == c || board[65] == c || board[21] == c || board[30] == c || board[67] == c || board[39] == c || board[68] == c || board[48] == c || board[69] == c || board[57] == c || board[70] == c || board[71] == c || board[75] == c || board[58] == c || board[59] == c || board[76] == c || board[77] == c) return false;
			return true;
		case 67:
			if (board[63] == c || board[4] == c || board[64] == c || board[13] == c || board[65] == c || board[22] == c || board[66] == c || board[31] == c || board[40] == c || board[68] == c || board[49] == c || board[69] == c || board[58] == c || board[70] == c || board[71] == c || board[76] == c || board[57] == c || board[59] == c || board[75] == c || board[77] == c) return false;
			return true;
		case 68:
			if (board[63] == c || board[5] == c || board[64] == c || board[14] == c || board[65] == c || board[23] == c || board[66] == c || board[32] == c || board[67] == c || board[41] == c || board[50] == c || board[69] == c || board[59] == c || board[70] == c || board[71] == c || board[77] == c || board[57] == c || board[58] == c || board[75] == c || board[76] == c) return false;
			return true;
		case 69:
			if (board[63] == c || board[6] == c || board[64] == c || board[15] == c || board[65] == c || board[24] == c || board[66] == c || board[33] == c || board[67] == c || board[42] == c || board[68] == c || board[51] == c || board[60] == c || board[70] == c || board[71] == c || board[78] == c || board[61] == c || board[62] == c || board[79] == c || board[80] == c) return false;
			return true;
		case 70:
			if (board[63] == c || board[7] == c || board[64] == c || board[16] == c || board[65] == c || board[25] == c || board[66] == c || board[34] == c || board[67] == c || board[43] == c || board[68] == c || board[52] == c || board[69] == c || board[61] == c || board[71] == c || board[79] == c || board[60] == c || board[62] == c || board[78] == c || board[80] == c) return false;
			return true;
		case 71:
			if (board[63] == c || board[8] == c || board[64] == c || board[17] == c || board[65] == c || board[26] == c || board[66] == c || board[35] == c || board[67] == c || board[44] == c || board[68] == c || board[53] == c || board[69] == c || board[62] == c || board[70] == c || board[80] == c || board[60] == c || board[61] == c || board[78] == c || board[79] == c) return false;
			return true;
		case 72:
			if (board[0] == c || board[73] == c || board[9] == c || board[74] == c || board[18] == c || board[75] == c || board[27] == c || board[76] == c || board[36] == c || board[77] == c || board[45] == c || board[78] == c || board[54] == c || board[79] == c || board[63] == c || board[80] == c || board[55] == c || board[56] == c || board[64] == c || board[65] == c) return false;
			return true;
		case 73:
			if (board[72] == c || board[1] == c || board[10] == c || board[74] == c || board[19] == c || board[75] == c || board[28] == c || board[76] == c || board[37] == c || board[77] == c || board[46] == c || board[78] == c || board[55] == c || board[79] == c || board[64] == c || board[80] == c || board[54] == c || board[56] == c || board[63] == c || board[65] == c) return false;
			return true;
		case 74:
			if (board[72] == c || board[2] == c || board[73] == c || board[11] == c || board[20] == c || board[75] == c || board[29] == c || board[76] == c || board[38] == c || board[77] == c || board[47] == c || board[78] == c || board[56] == c || board[79] == c || board[65] == c || board[80] == c || board[54] == c || board[55] == c || board[63] == c || board[64] == c) return false;
			return true;
		case 75:
			if (board[72] == c || board[3] == c || board[73] == c || board[12] == c || board[74] == c || board[21] == c || board[30] == c || board[76] == c || board[39] == c || board[77] == c || board[48] == c || board[78] == c || board[57] == c || board[79] == c || board[66] == c || board[80] == c || board[58] == c || board[59] == c || board[67] == c || board[68] == c) return false;
			return true;
		case 76:
			if (board[72] == c || board[4] == c || board[73] == c || board[13] == c || board[74] == c || board[22] == c || board[75] == c || board[31] == c || board[40] == c || board[77] == c || board[49] == c || board[78] == c || board[58] == c || board[79] == c || board[67] == c || board[80] == c || board[57] == c || board[59] == c || board[66] == c || board[68] == c) return false;
			return true;
		case 77:
			if (board[72] == c || board[5] == c || board[73] == c || board[14] == c || board[74] == c || board[23] == c || board[75] == c || board[32] == c || board[76] == c || board[41] == c || board[50] == c || board[78] == c || board[59] == c || board[79] == c || board[68] == c || board[80] == c || board[57] == c || board[58] == c || board[66] == c || board[67] == c) return false;
			return true;
		case 78:
			if (board[72] == c || board[6] == c || board[73] == c || board[15] == c || board[74] == c || board[24] == c || board[75] == c || board[33] == c || board[76] == c || board[42] == c || board[77] == c || board[51] == c || board[60] == c || board[79] == c || board[69] == c || board[80] == c || board[61] == c || board[62] == c || board[70] == c || board[71] == c) return false;
			return true;
		case 79:
			if (board[72] == c || board[7] == c || board[73] == c || board[16] == c || board[74] == c || board[25] == c || board[75] == c || board[34] == c || board[76] == c || board[43] == c || board[77] == c || board[52] == c || board[78] == c || board[61] == c || board[70] == c || board[80] == c || board[60] == c || board[62] == c || board[69] == c || board[71] == c) return false;
			return true;
		case 80:
			if (board[72] == c || board[8] == c || board[73] == c || board[17] == c || board[74] == c || board[26] == c || board[75] == c || board[35] == c || board[76] == c || board[44] == c || board[77] == c || board[53] == c || board[78] == c || board[62] == c || board[79] == c || board[71] == c || board[60] == c || board[61] == c || board[69] == c || board[70] == c) return false;
			return true;
		default: return true;
	}
}

void		sudoku(register char *board) {
	register uint8_t	bin[81];
	register uint8_t	index;
	
	index = 0;
	do {
		if (board[index] == '\0') return;
		index++;
	} while (index < 81);

SWITCH_BEGIN:	index--;
	switch (board[index]) {
		case '0':
			bin[index] = 0;
			if (index == 0) goto FORTYTWO;
			goto SWITCH_BEGIN;
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			if (valid(board, index, board[index]) == false) return;
			bin[index] = 1;
			if (index == 0) goto FORTYTWO;
			goto SWITCH_BEGIN;
		default: return;
	}
	do {
FORTYTWO:	if (bin[index] == 0) {
			do {
INSANITY:		board[index]++;
				if (valid(board, index, board[index])) {
					index++;
					if (index < 81) goto FORTYTWO;
					return;
				}
			} while (board[index] < '9');
			board[index] = '0';
		
SIXBYNINE:	if (index == 0) return;
			index--;
			if (bin[index] == 1) goto SIXBYNINE;
			if (board[index] < '9') goto INSANITY;
			board[index] = '0';
			goto SIXBYNINE;
		}
		index++;
	} while (index < 81);
}

int		main(int argc, char **argv) {
	if (argc != 2) return 0;
	sudoku(argv[1]);
	print(argv[1]);
	return 0;
}

