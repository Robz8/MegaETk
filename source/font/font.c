//Background converted using Mollusk's PAImageConverter
//This Background uses font_Pal

const int font_Width = 256;
const int font_Height = 72;

const unsigned short font_Map[288] __attribute__ ((aligned (4))) = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 
16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 1052, 30, 
31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 
47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 1082, 60, 61, 
0, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 
77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 0, 0, 0, 0, 0, 
88, 89, 90, 90, 90, 90, 91, 90, 90, 90, 92, 90, 90, 90, 90, 90, 
90, 93, 94, 95, 95, 96, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
98, 99, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 
100, 100, 100, 100, 100, 100, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 102, 3167, 3167, 3167, 3167, 3167, 3167, 3167, 3167, 3167, 3167, 3167, 3167, 3167, 3167, 
3167, 103, 104, 105, 106, 3162, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

const unsigned char font_Tiles[6912] __attribute__ ((aligned (4))) = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 1, 1, 2, 3, 1, 1, 1, 1, 1, 1, 7, 6, 1, 1, 1, 
1, 1, 1, 4, 6, 1, 1, 1, 1, 1, 1, 2, 3, 1, 1, 1, 
1, 1, 1, 11, 13, 1, 1, 1, 1, 1, 1, 8, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 11, 5, 1, 1, 1, 
1, 1, 4, 5, 2, 6, 1, 1, 1, 1, 12, 14, 9, 9, 1, 1, 
1, 1, 10, 1, 10, 13, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 10, 1, 1, 1, 
1, 1, 2, 1, 10, 1, 1, 1, 1, 11, 7, 7, 7, 7, 1, 1, 
1, 1, 2, 1, 10, 1, 1, 1, 1, 11, 7, 7, 7, 7, 1, 1, 
1, 1, 2, 1, 10, 1, 1, 1, 1, 1, 2, 1, 10, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 12, 15, 1, 1, 1, 1, 
1, 12, 11, 2, 15, 1, 1, 1, 1, 12, 15, 15, 1, 1, 1, 1, 
1, 1, 15, 2, 1, 1, 1, 1, 1, 1, 5, 16, 10, 1, 1, 1, 
1, 14, 10, 2, 11, 1, 1, 1, 1, 1, 5, 2, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 12, 10, 10, 1, 1, 8, 9, 
1, 10, 13, 2, 1, 12, 12, 1, 1, 14, 16, 12, 6, 10, 1, 1, 
1, 1, 1, 3, 2, 1, 1, 1, 1, 1, 13, 11, 13, 16, 16, 13, 
1, 1, 2, 3, 14, 12, 14, 17, 1, 16, 6, 1, 3, 11, 2, 6, 
1, 1, 6, 7, 8, 1, 1, 1, 1, 1, 10, 3, 10, 3, 1, 1, 
1, 1, 15, 13, 8, 13, 1, 1, 1, 1, 6, 11, 14, 1, 12, 7, 
1, 9, 2, 10, 12, 13, 15, 12, 1, 4, 3, 1, 10, 15, 3, 1, 
1, 7, 3, 1, 8, 7, 12, 1, 1, 8, 7, 7, 11, 12, 4, 7, 
1, 1, 1, 2, 5, 1, 1, 1, 1, 1, 1, 12, 14, 1, 1, 1, 
1, 1, 1, 10, 1, 1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 5, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 2, 6, 1, 1, 1, 1, 1, 10, 3, 1, 1, 1, 
1, 1, 8, 6, 1, 1, 1, 1, 1, 1, 10, 1, 1, 1, 1, 1, 
1, 1, 11, 1, 1, 1, 1, 1, 1, 1, 8, 2, 13, 1, 1, 1, 
1, 1, 1, 2, 2, 13, 1, 1, 1, 1, 1, 1, 2, 9, 1, 1, 
1, 1, 9, 8, 1, 1, 1, 1, 1, 1, 1, 12, 8, 1, 1, 1, 
1, 1, 1, 1, 8, 12, 1, 1, 1, 1, 1, 1, 5, 16, 1, 1, 
1, 1, 1, 1, 5, 16, 1, 1, 1, 1, 1, 1, 8, 12, 1, 1, 
1, 1, 1, 12, 8, 1, 1, 1, 1, 1, 9, 8, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 16, 5, 1, 1, 1, 
1, 3, 12, 16, 6, 15, 1, 1, 1, 1, 12, 4, 2, 3, 1, 1, 
1, 3, 11, 4, 11, 8, 1, 1, 1, 1, 1, 16, 5, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 5, 8, 1, 1, 1, 1, 1, 1, 5, 16, 1, 1, 1, 
1, 1, 7, 7, 7, 7, 7, 1, 1, 1, 1, 5, 16, 1, 1, 1, 
1, 1, 1, 5, 16, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 5, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 
1, 1, 14, 10, 1, 1, 1, 1, 1, 5, 8, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 15, 8, 8, 8, 12, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 14, 1, 1, 1, 1, 1, 
1, 14, 2, 14, 1, 1, 1, 1, 1, 1, 14, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 4, 6, 
1, 1, 1, 1, 5, 4, 6, 1, 1, 1, 1, 3, 4, 14, 1, 1, 
1, 1, 13, 2, 12, 1, 1, 1, 1, 1, 16, 16, 1, 1, 1, 1, 
1, 12, 2, 13, 1, 1, 1, 1, 1, 4, 5, 1, 1, 1, 1, 1, 
1, 1, 1, 8, 7, 4, 6, 1, 1, 1, 14, 2, 13, 12, 2, 1, 
1, 1, 15, 8, 1, 13, 7, 3, 1, 1, 8, 12, 1, 1, 7, 6, 
1, 1, 8, 12, 1, 1, 7, 6, 1, 1, 15, 8, 1, 13, 7, 3, 
1, 1, 14, 2, 13, 12, 2, 1, 1, 1, 1, 8, 7, 4, 6, 1, 
1, 1, 1, 1, 10, 8, 1, 1, 1, 1, 6, 7, 7, 8, 1, 1, 
1, 1, 1, 1, 10, 8, 1, 1, 1, 1, 1, 1, 10, 8, 1, 1, 
1, 1, 1, 1, 10, 8, 1, 1, 1, 1, 1, 1, 10, 8, 1, 1, 
1, 1, 1, 1, 10, 8, 1, 1, 1, 1, 1, 10, 7, 7, 10, 1, 
1, 1, 8, 7, 7, 8, 1, 1, 1, 14, 4, 3, 3, 4, 14, 1, 
1, 1, 1, 1, 1, 11, 9, 1, 1, 1, 1, 1, 3, 4, 3, 1, 
1, 1, 1, 3, 2, 6, 1, 1, 1, 1, 5, 4, 6, 1, 1, 1, 
1, 3, 4, 14, 1, 1, 1, 1, 1, 15, 7, 7, 7, 7, 9, 1, 
1, 1, 5, 2, 7, 11, 3, 1, 1, 1, 10, 15, 1, 16, 15, 1, 
1, 1, 1, 1, 1, 10, 12, 1, 1, 1, 1, 3, 7, 4, 3, 1, 
1, 1, 1, 1, 1, 15, 11, 1, 1, 1, 1, 1, 1, 6, 7, 1, 
1, 1, 2, 12, 1, 15, 11, 1, 1, 1, 6, 4, 7, 2, 5, 1, 
1, 1, 1, 1, 11, 12, 1, 1, 1, 1, 1, 12, 7, 12, 1, 1, 
1, 1, 3, 7, 2, 12, 1, 1, 1, 1, 11, 12, 10, 12, 1, 1, 
1, 12, 11, 1, 10, 12, 1, 1, 1, 10, 7, 7, 7, 7, 12, 1, 
1, 1, 1, 1, 10, 12, 1, 1, 1, 1, 1, 1, 10, 12, 1, 1, 
1, 5, 7, 7, 7, 2, 1, 1, 1, 6, 4, 1, 1, 1, 1, 1, 
1, 9, 2, 1, 1, 1, 13, 1, 1, 12, 7, 7, 7, 12, 3, 1, 
1, 1, 1, 1, 6, 7, 5, 1, 1, 1, 1, 1, 1, 2, 14, 1, 
1, 8, 16, 1, 14, 7, 13, 1, 1, 3, 11, 7, 7, 9, 1, 1, 
1, 1, 5, 2, 7, 11, 13, 1, 1, 1, 10, 16, 1, 10, 15, 1, 
1, 1, 7, 5, 1, 1, 1, 1, 1, 1, 7, 11, 7, 11, 13, 1, 
1, 1, 7, 9, 1, 11, 15, 1, 1, 1, 7, 13, 1, 12, 10, 1, 
1, 1, 11, 15, 1, 11, 15, 1, 1, 1, 5, 2, 7, 11, 13, 1, 
1, 1, 8, 7, 7, 7, 7, 6, 1, 1, 1, 1, 1, 3, 4, 1, 
1, 1, 1, 1, 1, 12, 15, 1, 1, 1, 1, 1, 1, 4, 5, 1, 
1, 1, 1, 1, 14, 2, 1, 1, 1, 1, 1, 1, 16, 12, 1, 1, 
1, 1, 1, 13, 7, 3, 1, 1, 1, 1, 1, 12, 10, 1, 1, 1, 
1, 1, 9, 7, 7, 11, 13, 1, 1, 1, 2, 9, 1, 2, 12, 1, 
1, 1, 10, 8, 3, 2, 6, 1, 1, 1, 3, 7, 2, 8, 1, 1, 
1, 1, 11, 14, 1, 11, 9, 1, 1, 5, 7, 1, 1, 12, 10, 1, 
1, 13, 7, 14, 1, 11, 15, 1, 1, 1, 9, 7, 7, 11, 3, 1, 
1, 1, 8, 7, 7, 9, 1, 1, 1, 6, 4, 3, 6, 7, 3, 1, 
1, 12, 10, 1, 1, 11, 9, 1, 1, 14, 4, 3, 3, 2, 12, 1, 
1, 1, 8, 7, 4, 2, 12, 1, 1, 1, 1, 1, 1, 4, 14, 1, 
1, 6, 4, 3, 9, 7, 13, 1, 1, 1, 8, 7, 7, 9, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 14, 1, 1, 1, 1, 1, 1, 14, 2, 14, 1, 1, 1, 
1, 1, 1, 14, 1, 1, 1, 1, 1, 1, 1, 14, 1, 1, 1, 1, 
1, 1, 14, 2, 14, 1, 1, 1, 1, 1, 1, 14, 1, 1, 1, 1, 
0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 7, 7, 1, 0, 0, 0, 
0, 1, 7, 7, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 
0, 1, 7, 7, 1, 0, 0, 0, 0, 1, 1, 7, 1, 0, 0, 0, 
0, 1, 7, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 
0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 7, 1, 0, 0, 
0, 0, 1, 7, 1, 0, 0, 0, 0, 1, 7, 1, 0, 0, 0, 0, 
0, 0, 1, 7, 1, 0, 0, 0, 0, 0, 0, 1, 7, 1, 0, 0, 
0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 
1, 7, 7, 7, 7, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 
1, 7, 7, 7, 7, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 7, 7, 1, 1, 0, 
0, 1, 7, 1, 1, 7, 1, 0, 0, 1, 1, 1, 1, 7, 1, 0, 
0, 0, 0, 1, 7, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 
0, 0, 0, 1, 7, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 
0, 0, 1, 7, 7, 7, 1, 0, 0, 1, 7, 1, 1, 1, 7, 1, 
1, 7, 1, 1, 7, 7, 1, 7, 1, 7, 1, 7, 1, 7, 1, 7, 
1, 7, 1, 7, 7, 7, 1, 7, 0, 1, 7, 1, 1, 1, 7, 1, 
0, 0, 1, 7, 7, 7, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 
1, 1, 1, 15, 9, 1, 1, 3, 1, 1, 1, 2, 16, 1, 1, 1, 
1, 1, 6, 10, 7, 13, 1, 1, 1, 1, 15, 6, 10, 12, 1, 1, 
1, 1, 10, 1, 14, 10, 1, 1, 1, 14, 7, 7, 7, 7, 3, 1, 
1, 8, 5, 1, 1, 10, 12, 1, 12, 7, 7, 6, 9, 7, 7, 9, 
1, 16, 7, 7, 7, 7, 12, 1, 1, 6, 2, 1, 1, 13, 2, 5, 
1, 6, 2, 1, 1, 3, 2, 6, 1, 6, 7, 7, 7, 7, 2, 1, 
1, 6, 2, 1, 1, 5, 8, 1, 1, 6, 2, 1, 1, 1, 10, 6, 
1, 6, 2, 1, 1, 5, 4, 5, 1, 7, 7, 7, 7, 7, 15, 1, 
1, 1, 9, 4, 7, 10, 8, 3, 1, 6, 7, 9, 1, 9, 7, 3, 
1, 8, 15, 1, 1, 1, 16, 3, 1, 10, 6, 1, 1, 1, 1, 1, 
1, 10, 6, 1, 1, 1, 1, 1, 1, 8, 15, 1, 1, 1, 1, 1, 
1, 6, 7, 6, 1, 5, 11, 13, 1, 1, 9, 7, 7, 11, 5, 1, 
3, 16, 7, 7, 7, 10, 13, 1, 1, 6, 10, 1, 1, 10, 10, 1, 
1, 6, 10, 1, 1, 13, 4, 3, 1, 6, 10, 1, 1, 1, 10, 6, 
1, 6, 10, 1, 1, 1, 10, 6, 1, 6, 10, 1, 1, 13, 7, 3, 
1, 6, 10, 1, 13, 11, 10, 1, 6, 7, 7, 7, 7, 10, 13, 1, 
1, 10, 7, 7, 7, 7, 7, 12, 1, 1, 10, 9, 1, 1, 12, 12, 
1, 1, 10, 9, 5, 5, 14, 12, 1, 1, 10, 7, 7, 9, 1, 1, 
1, 1, 10, 9, 9, 9, 1, 1, 1, 1, 10, 9, 14, 14, 3, 5, 
1, 1, 10, 9, 1, 1, 12, 12, 1, 10, 7, 7, 7, 7, 7, 12, 
1, 6, 7, 7, 7, 7, 7, 7, 1, 1, 6, 2, 1, 1, 1, 4, 
1, 1, 6, 2, 1, 12, 1, 11, 1, 1, 6, 7, 7, 2, 1, 1, 
1, 1, 6, 2, 1, 10, 1, 1, 1, 1, 6, 2, 1, 8, 1, 1, 
1, 1, 6, 2, 1, 1, 1, 1, 1, 6, 7, 7, 10, 1, 1, 1, 
1, 13, 10, 7, 4, 9, 8, 6, 1, 10, 11, 13, 13, 11, 8, 1, 
3, 4, 13, 1, 1, 5, 8, 1, 9, 10, 1, 1, 1, 1, 1, 1, 
9, 10, 1, 1, 12, 7, 7, 8, 5, 4, 13, 1, 1, 12, 8, 1, 
1, 10, 10, 1, 13, 11, 8, 1, 1, 3, 11, 7, 7, 4, 8, 6, 
7, 7, 10, 1, 10, 7, 7, 9, 6, 2, 1, 1, 1, 10, 9, 1, 
6, 2, 1, 1, 1, 10, 9, 1, 6, 7, 7, 7, 7, 7, 9, 1, 
6, 2, 1, 1, 1, 10, 9, 1, 6, 2, 1, 1, 1, 10, 9, 1, 
6, 2, 1, 1, 1, 10, 9, 1, 7, 7, 10, 1, 10, 7, 7, 9, 
1, 1, 1, 7, 7, 7, 1, 1, 1, 1, 1, 1, 7, 1, 1, 1, 
1, 1, 1, 1, 7, 1, 1, 1, 1, 1, 1, 1, 7, 1, 1, 1, 
1, 1, 1, 1, 7, 1, 1, 1, 1, 1, 1, 1, 7, 1, 1, 1, 
1, 1, 1, 1, 7, 1, 1, 1, 1, 1, 1, 7, 7, 7, 1, 1, 
1, 1, 1, 8, 7, 7, 12, 1, 1, 1, 1, 1, 8, 9, 1, 1, 
1, 1, 1, 1, 8, 9, 1, 1, 1, 1, 1, 1, 8, 9, 1, 1, 
1, 1, 1, 1, 8, 9, 1, 1, 1, 1, 6, 1, 8, 9, 1, 1, 
1, 3, 4, 5, 2, 9, 1, 1, 1, 1, 8, 7, 2, 13, 3, 1, 
8, 7, 15, 1, 9, 2, 8, 9, 1, 7, 1, 1, 9, 14, 1, 1, 
1, 7, 1, 14, 9, 1, 1, 1, 1, 7, 5, 2, 13, 1, 1, 1, 
1, 7, 16, 11, 16, 1, 1, 1, 1, 7, 1, 3, 2, 14, 1, 1, 
1, 7, 1, 1, 5, 2, 3, 1, 7, 7, 7, 1, 12, 7, 7, 9, 
1, 7, 7, 10, 1, 1, 1, 1, 1, 6, 10, 1, 1, 1, 1, 1, 
1, 6, 10, 1, 1, 1, 1, 1, 1, 6, 10, 1, 1, 1, 1, 1, 
1, 6, 10, 1, 1, 1, 1, 1, 1, 6, 10, 1, 1, 13, 6, 1, 
1, 6, 10, 1, 1, 14, 8, 1, 1, 7, 7, 7, 7, 7, 8, 1, 
7, 7, 13, 1, 1, 6, 7, 2, 1, 7, 12, 1, 1, 15, 2, 1, 
1, 7, 16, 1, 1, 2, 2, 1, 1, 16, 7, 13, 5, 10, 2, 1, 
1, 8, 10, 14, 12, 9, 2, 1, 1, 8, 9, 16, 10, 3, 2, 1, 
1, 8, 13, 4, 15, 3, 2, 1, 7, 7, 16, 16, 9, 7, 7, 2, 
1, 7, 4, 13, 1, 10, 7, 7, 1, 6, 7, 15, 1, 1, 10, 1, 
1, 6, 4, 7, 3, 1, 10, 1, 1, 6, 2, 15, 10, 1, 10, 1, 
1, 6, 2, 13, 2, 14, 10, 1, 1, 6, 2, 1, 6, 2, 10, 1, 
1, 6, 2, 1, 1, 8, 7, 1, 1, 7, 7, 12, 1, 13, 2, 1, 
1, 1, 3, 10, 7, 7, 12, 1, 1, 1, 10, 10, 1, 6, 4, 9, 
1, 13, 7, 13, 1, 1, 12, 16, 1, 14, 11, 1, 1, 1, 5, 4, 
1, 14, 11, 1, 1, 1, 5, 4, 1, 13, 7, 13, 1, 1, 12, 16, 
1, 1, 10, 10, 1, 6, 4, 9, 1, 1, 3, 11, 7, 7, 12, 1, 
1, 6, 11, 7, 7, 7, 2, 6, 1, 1, 12, 8, 1, 1, 14, 4, 
1, 1, 12, 8, 1, 1, 1, 7, 1, 1, 12, 8, 1, 1, 9, 2, 
1, 1, 12, 7, 7, 7, 2, 6, 1, 1, 12, 8, 1, 1, 1, 1, 
1, 1, 12, 8, 1, 1, 1, 1, 1, 12, 7, 7, 12, 1, 1, 1, 
1, 1, 12, 4, 7, 11, 3, 1, 1, 6, 7, 9, 1, 10, 2, 1, 
1, 15, 8, 1, 1, 13, 4, 5, 1, 11, 14, 1, 1, 1, 16, 12, 
1, 11, 6, 1, 1, 1, 8, 12, 1, 15, 12, 5, 4, 1, 11, 14, 
1, 6, 2, 8, 9, 4, 14, 1, 1, 1, 12, 7, 7, 14, 4, 5, 
3, 16, 7, 7, 7, 7, 15, 1, 1, 6, 2, 1, 1, 13, 2, 5, 
1, 6, 2, 1, 1, 3, 2, 6, 1, 6, 7, 7, 7, 7, 10, 1, 
1, 6, 2, 1, 14, 12, 1, 1, 1, 6, 2, 1, 1, 11, 1, 1, 
1, 6, 2, 1, 1, 16, 14, 1, 6, 7, 7, 10, 1, 9, 2, 12, 
1, 3, 11, 7, 7, 16, 16, 1, 1, 12, 9, 1, 1, 9, 7, 1, 
1, 6, 9, 1, 1, 1, 11, 1, 1, 1, 9, 16, 8, 13, 1, 1, 
1, 1, 1, 1, 13, 8, 12, 1, 1, 6, 13, 1, 1, 1, 10, 1, 
1, 12, 10, 1, 1, 5, 4, 1, 1, 12, 11, 7, 7, 4, 9, 1, 
1, 8, 7, 7, 7, 7, 7, 9, 1, 8, 14, 3, 2, 1, 15, 9, 
1, 8, 5, 3, 2, 1, 12, 9, 1, 1, 1, 3, 2, 1, 1, 1, 
1, 1, 1, 3, 2, 1, 1, 1, 1, 1, 1, 3, 2, 1, 1, 1, 
1, 1, 1, 3, 2, 1, 1, 1, 1, 1, 3, 7, 7, 2, 1, 1, 
1, 7, 7, 7, 1, 3, 7, 7, 1, 1, 7, 3, 1, 1, 3, 8, 
1, 1, 7, 3, 1, 1, 3, 8, 1, 1, 7, 3, 1, 1, 3, 8, 
1, 1, 7, 3, 1, 1, 3, 8, 1, 1, 7, 5, 1, 1, 5, 8, 
1, 1, 10, 10, 1, 13, 11, 14, 1, 1, 3, 11, 7, 7, 15, 1, 
8, 8, 7, 7, 3, 9, 7, 7, 1, 1, 16, 9, 1, 1, 14, 12, 
1, 1, 14, 16, 1, 1, 8, 13, 1, 1, 13, 4, 13, 1, 16, 1, 
1, 1, 1, 8, 12, 14, 9, 1, 1, 1, 1, 14, 10, 8, 13, 1, 
1, 1, 1, 1, 4, 8, 1, 1, 1, 1, 1, 1, 15, 14, 1, 1, 
12, 7, 7, 12, 11, 14, 7, 7, 1, 12, 8, 1, 7, 12, 3, 15, 
1, 5, 11, 5, 4, 16, 14, 9, 1, 13, 7, 14, 15, 11, 15, 5, 
1, 1, 11, 10, 6, 7, 8, 1, 1, 1, 8, 4, 1, 11, 11, 1, 
1, 1, 12, 11, 1, 8, 15, 1, 1, 1, 6, 15, 1, 12, 9, 1, 
7, 7, 7, 9, 3, 7, 7, 7, 1, 5, 2, 1, 1, 14, 12, 1, 
1, 1, 12, 12, 13, 8, 1, 1, 1, 1, 1, 11, 16, 13, 1, 1, 
1, 1, 1, 16, 4, 3, 1, 1, 1, 1, 12, 8, 15, 10, 1, 1, 
1, 5, 16, 1, 1, 16, 12, 1, 9, 7, 7, 9, 3, 7, 7, 8, 
1, 7, 7, 9, 1, 1, 2, 9, 1, 5, 2, 13, 1, 13, 10, 3, 
1, 1, 12, 15, 1, 12, 3, 3, 1, 1, 1, 16, 12, 14, 1, 1, 
1, 1, 1, 6, 2, 1, 1, 1, 1, 1, 1, 6, 2, 1, 1, 1, 
1, 1, 1, 6, 2, 1, 1, 1, 1, 1, 6, 7, 7, 2, 1, 13, 
1, 7, 7, 7, 7, 7, 14, 1, 1, 11, 1, 1, 3, 8, 1, 1, 
1, 16, 1, 1, 8, 13, 1, 1, 1, 1, 1, 9, 9, 1, 1, 1, 
1, 1, 13, 16, 1, 1, 1, 1, 1, 1, 8, 3, 1, 3, 5, 1, 
1, 14, 12, 1, 1, 12, 12, 1, 1, 2, 7, 7, 7, 7, 12, 1, 
0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 7, 7, 7, 1, 0, 0, 
0, 1, 7, 1, 1, 1, 0, 0, 0, 1, 7, 1, 0, 0, 0, 0, 
0, 1, 7, 1, 1, 1, 0, 0, 0, 1, 7, 7, 7, 1, 0, 0, 
0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 7, 1, 0, 0, 0, 0, 
0, 0, 1, 7, 1, 0, 0, 0, 0, 0, 0, 1, 7, 1, 0, 0, 
0, 0, 0, 0, 1, 7, 1, 0, 0, 0, 0, 0, 0, 1, 7, 1, 
0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 7, 1, 1, 0, 0, 
0, 1, 7, 1, 7, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 7, 7, 7, 7, 7, 7, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 11, 7, 7, 10, 1, 1, 
1, 3, 12, 1, 1, 2, 6, 1, 1, 3, 8, 16, 8, 2, 6, 1, 
1, 12, 8, 1, 5, 2, 12, 1, 1, 5, 7, 7, 7, 16, 7, 9, 
1, 12, 7, 12, 1, 1, 1, 1, 1, 1, 12, 12, 1, 1, 1, 1, 
1, 1, 12, 12, 1, 1, 1, 1, 1, 1, 12, 11, 7, 7, 16, 1, 
1, 1, 12, 11, 13, 3, 11, 12, 1, 1, 12, 12, 1, 1, 9, 10, 
1, 1, 12, 11, 13, 3, 11, 12, 1, 1, 12, 2, 7, 7, 16, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 9, 4, 7, 4, 6, 1, 
1, 13, 7, 9, 1, 9, 11, 1, 1, 6, 10, 1, 1, 1, 1, 1, 
1, 13, 7, 9, 1, 1, 5, 1, 1, 1, 9, 4, 7, 4, 9, 1, 
1, 1, 1, 1, 9, 7, 10, 1, 1, 1, 1, 1, 1, 9, 10, 1, 
1, 1, 1, 1, 1, 9, 10, 1, 1, 1, 15, 7, 7, 2, 10, 1, 
1, 14, 2, 5, 1, 8, 10, 1, 1, 12, 12, 1, 1, 9, 10, 1, 
1, 14, 2, 5, 1, 8, 10, 1, 1, 1, 15, 7, 7, 4, 7, 8, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 9, 4, 7, 7, 9, 1, 
1, 13, 7, 7, 7, 7, 2, 1, 1, 9, 11, 1, 1, 1, 1, 1, 
1, 13, 7, 12, 1, 1, 6, 1, 1, 1, 9, 4, 7, 4, 9, 1, 
1, 1, 1, 6, 7, 2, 1, 1, 1, 1, 1, 16, 8, 11, 1, 1, 
1, 1, 1, 10, 7, 8, 1, 1, 1, 1, 9, 2, 9, 1, 1, 1, 
1, 1, 1, 10, 9, 1, 1, 1, 1, 1, 1, 10, 9, 1, 1, 1, 
1, 1, 1, 10, 9, 1, 1, 1, 1, 1, 10, 7, 7, 6, 1, 1, 
1, 1, 16, 7, 4, 16, 6, 1, 1, 14, 11, 1, 9, 16, 1, 1, 
1, 14, 16, 1, 6, 8, 1, 1, 1, 9, 16, 8, 16, 3, 1, 1, 
1, 16, 6, 1, 1, 1, 1, 1, 1, 8, 10, 7, 7, 11, 3, 1, 
1, 11, 1, 1, 1, 9, 12, 1, 1, 8, 7, 7, 7, 11, 3, 1, 
1, 12, 7, 8, 1, 1, 1, 1, 1, 1, 12, 8, 1, 1, 1, 1, 
1, 1, 12, 8, 1, 1, 1, 1, 1, 1, 12, 2, 7, 7, 2, 3, 
1, 1, 12, 11, 13, 1, 11, 9, 1, 1, 12, 8, 1, 1, 10, 9, 
1, 1, 12, 8, 1, 1, 10, 9, 1, 12, 7, 7, 12, 10, 7, 7, 
1, 1, 1, 13, 4, 3, 1, 1, 1, 1, 1, 1, 12, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 10, 7, 6, 1, 1, 
1, 1, 1, 1, 10, 6, 1, 1, 1, 1, 1, 1, 10, 6, 1, 1, 
1, 1, 1, 1, 10, 6, 1, 1, 1, 1, 9, 10, 7, 7, 6, 1, 
1, 1, 1, 15, 15, 1, 1, 1, 1, 1, 1, 6, 6, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 9, 7, 7, 10, 1, 1, 
1, 1, 1, 9, 7, 1, 1, 1, 1, 1, 1, 9, 7, 1, 1, 1, 
1, 1, 7, 9, 7, 1, 1, 1, 1, 1, 10, 7, 10, 1, 1, 1, 
6, 7, 2, 1, 1, 1, 1, 1, 1, 6, 2, 1, 1, 1, 1, 1, 
1, 6, 2, 1, 1, 1, 1, 1, 1, 6, 2, 1, 12, 7, 7, 6, 
1, 6, 2, 1, 12, 12, 1, 1, 1, 6, 2, 10, 11, 13, 1, 1, 
1, 6, 4, 3, 6, 11, 3, 1, 6, 7, 7, 10, 12, 7, 7, 6, 
1, 1, 10, 7, 6, 1, 1, 1, 1, 1, 1, 10, 6, 1, 1, 1, 
1, 1, 1, 10, 6, 1, 1, 1, 1, 1, 1, 10, 6, 1, 1, 1, 
1, 1, 1, 10, 6, 1, 1, 1, 1, 1, 1, 10, 6, 1, 1, 1, 
1, 1, 1, 10, 6, 1, 1, 1, 1, 1, 10, 7, 7, 6, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 7, 7, 7, 14, 7, 7, 14, 1, 
7, 8, 12, 4, 14, 12, 10, 1, 7, 3, 3, 2, 3, 14, 2, 1, 
7, 3, 3, 2, 3, 14, 2, 1, 7, 3, 3, 7, 3, 14, 7, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 12, 7, 2, 7, 7, 11, 3, 1, 
1, 12, 11, 13, 1, 11, 9, 1, 1, 12, 8, 1, 1, 10, 9, 1, 
1, 12, 8, 1, 1, 10, 9, 1, 12, 7, 7, 12, 10, 7, 7, 9, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 13, 10, 7, 7, 16, 1, 1, 
1, 15, 11, 13, 3, 11, 12, 1, 1, 2, 6, 1, 1, 9, 10, 1, 
1, 15, 11, 13, 3, 11, 12, 1, 1, 13, 10, 7, 7, 16, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 6, 2, 4, 7, 11, 3, 1, 
1, 6, 2, 5, 1, 10, 16, 1, 1, 6, 10, 1, 1, 3, 7, 1, 
1, 6, 2, 5, 1, 10, 10, 1, 1, 6, 2, 7, 7, 11, 3, 1, 
1, 6, 4, 1, 1, 1, 1, 1, 1, 12, 4, 1, 1, 1, 1, 1, 
1, 13, 10, 7, 7, 2, 12, 1, 1, 15, 11, 13, 13, 11, 12, 1, 
1, 10, 6, 1, 1, 8, 12, 1, 1, 15, 11, 13, 13, 11, 12, 1, 
1, 13, 10, 7, 7, 4, 12, 1, 1, 1, 1, 1, 1, 8, 12, 1, 
1, 1, 1, 1, 1, 8, 12, 1, 1, 1, 1, 1, 8, 7, 7, 9, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 7, 7, 10, 7, 7, 1, 
1, 1, 1, 7, 10, 13, 12, 1, 1, 1, 1, 7, 3, 1, 1, 1, 
1, 1, 1, 7, 3, 1, 1, 1, 1, 1, 7, 7, 7, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 13, 10, 7, 7, 2, 12, 1, 1, 
1, 8, 1, 1, 9, 6, 1, 1, 1, 6, 16, 8, 6, 1, 1, 1, 
1, 15, 1, 1, 8, 12, 1, 1, 1, 7, 7, 7, 4, 6, 1, 1, 
1, 1, 1, 7, 3, 1, 1, 1, 1, 1, 1, 7, 3, 1, 1, 1, 
1, 1, 1, 7, 7, 9, 1, 1, 1, 1, 12, 7, 3, 1, 1, 1, 
1, 1, 1, 7, 3, 1, 1, 1, 1, 1, 1, 7, 3, 1, 1, 1, 
1, 1, 1, 4, 6, 13, 5, 1, 1, 1, 1, 12, 7, 4, 3, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 10, 7, 9, 1, 7, 7, 3, 
1, 1, 10, 9, 1, 1, 7, 3, 1, 1, 10, 9, 1, 1, 7, 3, 
1, 1, 10, 12, 1, 6, 7, 3, 1, 1, 9, 7, 7, 7, 4, 7, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 9, 7, 7, 9, 2, 7, 2, 
1, 1, 9, 10, 1, 1, 10, 1, 1, 1, 1, 10, 6, 9, 9, 1, 
1, 1, 1, 6, 10, 10, 1, 1, 3, 1, 1, 1, 10, 14, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 10, 7, 7, 9, 7, 14, 7, 7, 
1, 15, 12, 12, 2, 9, 12, 6, 1, 6, 11, 8, 14, 16, 10, 1, 
1, 1, 2, 16, 13, 7, 15, 1, 1, 1, 15, 9, 1, 16, 5, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 12, 7, 7, 6, 16, 7, 8, 
1, 1, 6, 11, 6, 11, 6, 1, 1, 1, 1, 5, 7, 14, 1, 1, 
1, 1, 5, 16, 14, 11, 9, 1, 1, 12, 7, 7, 14, 7, 7, 8, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 8, 7, 7, 6, 7, 7, 10, 
1, 1, 8, 12, 1, 3, 8, 13, 1, 1, 3, 4, 13, 8, 6, 1, 
1, 1, 1, 8, 8, 10, 1, 1, 1, 1, 1, 5, 7, 9, 1, 13, 
1, 3, 6, 8, 9, 1, 1, 1, 1, 12, 7, 12, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 7, 7, 7, 7, 12, 1, 1, 
1, 12, 1, 3, 12, 1, 1, 1, 1, 1, 3, 16, 1, 1, 1, 1, 
1, 13, 16, 1, 13, 12, 1, 1, 1, 11, 7, 7, 7, 10, 1, 1, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 
0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 
1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 
1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 
0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 
0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 
0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 
1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 
1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 
1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 
0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 
1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

