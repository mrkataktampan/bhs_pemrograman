## RANGKUMAN

# 1. Definisi
Array pada bahasa phyton merupakan struktur yang ditujukan untuk menyimpan dan mengatur set data. Struktur data membicarakan tentang penyimpanan, mengatur, pengelompokkan, dan mempresentasikan.

# 2. Set
Set merupakan tipa data kolektif yang digunakan untuk menyimpan beberapa nilai unik satu variabel. Berikut beberapa nilai unik set, yaitu:
- set hanya menyimpan nilai unik (bukan duplikat)
- setelah nilai dimasukkan ke dalam set, nilai tidak dapat berubah
- set tidak memiliki urutan, sehingga tidak dapat diakses berdasarkan variabel

# CONTOH dalam Set
```
student_set = {'Huda', 'Lendis', 'Wahid'}
print (student_set)

fruit_set = {['Apple', 'Mangga']}
print (fruit_set)
```
# OUTPUT:
~~~
{'Huda', 'Lendis', 'Wahid'}
{'Apple', 'Mangga'}
~~~

## d. Add/Update Set Element
Pada saat ingin menambahkan elemen ke dalam set, dapat menggunakan fungsi 'add()'.
Selain itu kita juga dapat memeperbarui data dengan fungsi 'update().

# CONTOH dalam Add
alphabet_set = {'a', 'b', 'c'}
print(alphabet_set)

alphabet_set.add('d')
alphabet_set.add('e')

alphabet_set.update({'f', 'g'})
alphabet_set.update(['h', 'i'])

print(alphabet_set)

# OUTPUT:
{'a', 'b', 'c'}
{'d', 'u', 'e', 'a', 'b', 'g', 'h', 'f', 'c'}

## e. Delete/Remove Set Elemen
Untuk menghapus elemen dalam set di Python, terdapat empat fungsi yang bisa digunakan, yaitu:
- remove(value)  : Untuk menghapus nilai tertentu dari set
- discard(value) : Untuk menghapus nilai tertentu, tetapi tidak akan menghasilkan error jika nilai tersebut tidak ada dalam set
- Fungsi pop()   : Untuk menghapus dan mengembalikan elemen acak dari set, mengingat set di Python tidak memiliki urutan tetap
- fungsi clear() : Untuk menghapus semua elemen dalam set, mengosongkan set sepenuhnya

# CONTOH dalam Delete
set = {'virtual', 'virtuous', 100, ('a', 'b'), False, True}
print(set)
set = {'virtual', 'virtuous', 100, ('a', 'b'), False, True}
print(set)

#Menghapus elemen 100
set.remove(100)
print(set)

#Menghapus elemen ('a', 'b')
set.discard(('a', 'b'))
print(set)

#Menghapus elemen acak
RemovedValue = set.pop()
print("Removed value =", RemovedValue)
print(set)

#Menghapus semua elemen
set.clear()
print(set)

# OUTPUT:
{False, True, 100, 'maya', 'budi', ('a', 'b')}
{False, True, 'maya', 'budi', ('a', 'b')}
{False, True, 'maya', 'budi'}
Removed value = False
{True, 'maya', 'budi'}
set()

# F.Functions (Set)
Fungsi-fungsi bawaan dalam Python yang digunakan untuk mengelola set 
meliputi beberapa metode utama yang sangat berguna dalam manipulasi data.
Berikut ringkasan fungsi bawaan tipe data set yang bisa kita gunakan:
- add()        : Menambahkan satu anggota ke set
- clear()      : Menghapus seluruh rangkaian
- copy()       : Buat salinan satu set menjadi set baru
- difference() : Melakukan operasi perbedaan antara dua set
- discard()    : Menghapus satu anggota dari kumpulan


