#include <stdlib.h>
#include <mpg123.h>

// Khai báo con trỏ thư viện giải mã mp3
mpg123_handle *mh = NULL;

// Khai báo con trỏ file để đọc file mp3
FILE *p_file;

// Đường dẫn file mp3
const char *filename = "/home/nqvuong/Downloads/bass.mp3";

// buffer khi đọc file mp3 thông qua hàm fread
unsigned char *mp3_buffer;

// kích thước buffer cho mỗi lần đọc file mp3
size_t mp3_buffer_size = 10240;

// buffer của dữ liệu được giải mã
unsigned char *pcm_decoded;
