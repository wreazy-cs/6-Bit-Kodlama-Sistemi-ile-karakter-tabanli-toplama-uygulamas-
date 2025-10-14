# 6-Bit-Kodlama-Sistemi-ile-karakter-tabanli-toplama-uygulamas-
# Karakter Tabanlı Toplama Uygulaması

Bu proje, C programlama dilinin temel yeteneklerini kullanarak, kullanıcıdan alınan iki tek haneli sayının karakter tabanlı olarak işlenmesini ve toplanmasını amaçlamaktadır. Proje, özellikle girdi doğrulama ve veri tipi dönüşümleri üzerine odaklanmıştır.

## Projenin Temel Özellikleri

* **Girdi Kontrolü:** Kullanıcının tek haneden fazla karakter veya rakam olmayan bir değer girmesini engeller.
* **Veri Doğrulama:** Girilen karakterlerin `isdigit()` fonksiyonu ile birer rakam olup olmadığını kontrol eder.
* **ASCII Dönüşümü:** Matematiksel işlem yapabilmek için karakter girdilerini (`char`) tamsayılara (`int`) dönüştürür ve işlem sonucunu tekrar karaktere çevirir.
* **Limit Kontrolü:** Toplama işleminin sonucunun tek haneli olma limitini aşıp aşmadığını denetler.

## Kullanılan Teknolojiler

* **Programlama Dili:** C
* **Derleyici:** GCC (GNU Compiler Collection)
* **Kütüphaneler:**
    * `stdio.h` (Standart Girdi/Çıktı İşlemleri)
    * `ctype.h` (Karakter Tipi Kontrolü)

## Kurulum ve Çalıştırma

Projeyi yerel makinenizde derlemek ve çalıştırmak için aşağıdaki adımları izleyin.

**1. Depoyu Klonlayın:**
```bash
git clone [https://github.com/](https://github.com/)[KullaniciAdiniz]/6-Bit-Kodlama-Sistemi-ile-karakter-tabanli-toplama-uygulamas-.git
```

**2. Proje Dizinine Gidin:**
```bash
cd 6-Bit-Kodlama-Sistemi-ile-karakter-tabanli-toplama-uygulamas-
```

**3. Kodu Derleyin:**
Aşağıdaki komut, `6-bit-toplama.c` kaynak dosyasını derleyerek `toplama-uygulamasi` adında çalıştırılabilir bir dosya oluşturur.
```bash
gcc 6-bit-toplama.c -o toplama-uygulamasi
```

**4. Programı Çalıştırın:**
```bash
./toplama-uygulamasi
```

## Teslimat Videosu

Projenin kod anlatımını ve canlı demosunu içeren video, ödev teslim platformu üzerinden ayrıca teslim edilmiştir.
