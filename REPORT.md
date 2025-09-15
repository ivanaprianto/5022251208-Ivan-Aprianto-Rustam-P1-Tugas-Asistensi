# halo
seperti instruksi yang diberikan, saya telah membenarkan kode dan menambahkan beberapa fitur, tapi sebelum mulai saya ingin minta maaf atas tampilan yang membosankan, karena saya edit pake nano di terminal saya

# CODE

## deklarasi
![declarations](img/declarations.png)

seperti yang diketahui kita semua, C sangat tidak suka jika ada yang tidak dideklarasikan, jadi saya buatlah deklarasi variabel dan juga include library yang digunakan (stdio buat operasi i/o, stdlib buat memory management)

## prototype fungsi
![function prototype](img/prototype.png)

fungsi-fungsi di C perlu mempunyai prototypenya sebelum dijalankan, maka disini saya buatlah prototypenya.

## fungsi
![index function](img/func1.png)

ini fungsi 1, tinggal baca itu commentnya

![other function](img/func2.png)

fungsi 2, sama

### bonus 
seperti yang bisa dilihat, saya penganut Allman indentation style, dimana tiap curly bracket menempati barisnya sendiri dan mengikuti indentasi parent functionnya.

## main
![int main, first image](img/main.png)

disini ada beberapa edit yang saya buat.
pertama ukuran array buat charnya saya gedein, biar nama saya muat
lalu saya ganti data type nrp dari integer menjadi long long, karena 2^32 ga nyampe 50xxxxxxxx

![int main, second image](img/main1.png)

lalu ada beberapa modifikasi di bagian for loop utama
pertama, operator && saya ganti jadi ||, karena jika menggunakan && saya masih bisa aja bikin salah satu nilainya negatif
kedua ya saya tambahin limit buat nilai matkul (100), ga ada limit sks karena saya lupa sks paling gede berapa

# OUTPUT

## FAIL
![failure](img/failures.png)

inilah dua kasus yang akan menggagalkan program.

## SUCCESS
![umazing](img/success.png)

dan ini contoh keberhasilan
