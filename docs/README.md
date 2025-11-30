# Program Inventaris Laboratorium

## Table of Contents
## Table of Contents
- [Deskripsi Program](#deskripsi-program)
- [Cara Menjalankan](#cara-menjalankan)
- [Struktur Folder](#struktur-folder)
- [Penjelasan Class dan Method](#penjelasan-class-dan-method)
- [Screenshot Output Program](#screenshot-output-program)

## Deskripsi Program
Program ini adalah program inventaris untuk laboratorium suatu sekolah yang dibuat menggunakan bahasa pemrograman C++. Program ini berfungsi untuk mencatat alat (mikroskop, tabung reaksi, dan multimeter) pada laboratorium tersebut.

### 1. Tujuan Program
-Menerapkan konsep OOP (class, object, constructor, encapsulation, danmethod untuk memanipulasi data).
-Membuat sistem inventaris untuk laboratorium
-Menerapkan kolaborasi dengan menggunakan GitHub

### 2. Fungsi Utama Program
-Meambahkan alat laboratorium baru beserta dengan nama dan jumlahnya
-Menambah dan mengurangi jumlah stok setiap alat
-Menampilkan daftar semua alat yang tersedia

## Cara Menjalankan
### 1. Simpan semua file yang dibutuhkan dalam satu folder yang sama
AlatLaboratorium.cpp
AlatLaboratorium.hpp
main.cpp
program.exe

### 2. Buka terminal pada folder

### 3. Compile programnya dengan perintah
    g++ main.cpp AlatLaboratorium.cpp -o program

### 4. Jalankan programnya

## Struktur Folder
praktikum-oop/
│
├── src/
│   ├── AlatLaboratorium.hpp
│   ├── AlatLaboratorium.cpp
│   └── main.cpp
│
└── README.md

## Penjelasan Class dan Method
### Class: AlatLaboratorium
Class ini digunakan untuk menyimpan data setiap alat yang tersedia pada laboratorium.

### Atribut
| Atribut | Tipe   | Deskripsi                 |
| ------- | ------ | ------------------------- |
| nama    | string | Nama alat laboratorium    |
| jumlah  | int    | Jumlah alat yang tersedia |

### Method
1. Tambah(int n)
Untuk menambahkan jumlah alat sebanyak n.

2. Kurang(int n)
Mengurangi jumlah alat sebanyak n.

3. tampil()
Menampilkan informasi nama dan jumlah alat kepada terminal.

## Screenshot Output Program
<img width="730" height="598" alt="Screenshot 2025-11-29 180045" src="https://github.com/user-attachments/assets/eade4ffb-6445-4ce5-9a24-e55e0ea5207b" />
