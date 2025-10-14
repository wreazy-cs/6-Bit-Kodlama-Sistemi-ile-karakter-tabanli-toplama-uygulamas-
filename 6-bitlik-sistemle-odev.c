#include <stdio.h> // Bu kütüphane kullanıcıdan girdi almak ve çıktı vermek için gerekli. (printf, getchar)
#include <ctype.h> // Bu kütüphane karakter işlemleri için gerekli (isdigit) veya 
// kodumuzda kullanmasakta isteyebileceğimiz diğer fonksiyonlar için gerekli(isalpha, islower, vs.)


int main(void) { // Ana program fonksiyonu, program buradan başlar ve biter void parametresi ile dışarıdan argüman almaz
    // int ile döndürülen değer işletim sistemine programın başarılı veya başarısız olduğunu bildirir. 0 başarılı, 1 başarısız anlamına gelir.
    char ch1, ch2; // Kullanıcıdan alınan karakterleri tutmak için değişkenler gereklidir. Burada ch1 ve ch2 değişkenleri bu sebepten tanıtılmıştır.
    // char tipinde olmalarının sebebi de kullanıcıdan tek karakter alınacak olmasıdır. Ayrıca getchar fonksiyonuna atayabilmek için char tipinde olmaları gerekir.
    int val1, val2, sum; // Sayısal işlemler için karakterlerin sayısal karşılıklarını tutmak üzere int tipinde değişkenler tanıtılmıştır. 
    char next_char; // Sonraki karakteri kontrol etmek için yeni değişken
     
    printf("6-Bitlik Kodlama Sistemi ile Karakter Tabanli Toplama\n"); // Program başlığı tamamen gör
    printf("<====================================================>\n\n");


    // 1. sayı girişi
    printf("Birinci tek haneli sayiyi girin (0-9): ");
    ch1 = getchar(); // Kullanıcının girdiği BİRİNCİ karakteri ascii formatında oku demektir. 
    next_char = getchar(); // Kullanıcının girdiği İKİNCİ karakteri ascii formatında oku demektir. 


    // ÖNEMLİ NOT : Yukarıda tek haneli bir sayı girilmesini beklediğimizden ötürü ikinci olarak girdi verilmesi halinde \n yani Enter karakterini bekleriz.
    // Eğer kullanıcı tek karakterden sonra Enter'a basmazsa, ikinci karakter '\n' olmayacaktır ve aşağıdaki kod ile bu durum kontrol edilir.
    // Kullanıcıdan tek karakter girmesini bekliyoruz. Eğer ikinci karakter '\n' değilse, kullanıcı birden fazla karakter girmiş demektir.
    if (next_char != '\n') {
        // Hata mesajı verdikten sonra, kullanıcı Enter'a basana kadar karakterleri okumaya devam eder. Burada while döngü oluşturur. Ne zaman ki enter karakteri girilirse program hatalı olarak sonlanır.
        printf("\nHATA: Lutfen SADECE 0-9 Arasında rakamlar girin!\n");
        while (next_char != '\n') {
            next_char = getchar();
        }
        return 1; // Hata ver ve hemen çık
    }


    // Bu satıra kadar gelinmişse, demek ki kullanıcı tek karakter girmiştir. 
    // Şimdi o tek karakteri kontrol edebiliriz: Girilen karakter sayı mı?
    if (!isdigit(ch1)) { // isdigit() fonksiyonu, karakterin bir rakam (0-9) olup olmadığını kontrol eder. Eğer değilse, hata mesajı verilir.
        // Bu fonksiyon yukarıda include edilen <ctype.h> kütüphanesinden gelir.
        printf("\nHATA: Girilen değer bir karakter olamaz! Lütfen sadece (0-9) arasında rakamlar giriniz.\n");
        return 1;  // hemen çık
    }

    // Girilen karakter sayı ise, karakterin sayısal değerini bulmak için '0' karakterini çıkarırız.
    // ASCII tablosunda '0' karakterinin değeri 48'dir, '1' karakterinin değeri 49'dur, vb.
    // Bu çıkarma işlemi, karakterin gerçek sayısal değerini verir. Örneğin, '3' - '0' = 51 - 48 = 3.   
    val1 = ch1 - '0';
    

    // 2. sayı girişi (Sıra ikinci sayıda, ilk sayı için yaptığımız kontrollerin aynısını burada da yapıyoruz)
    printf("Ikinci tek haneli sayiyi girin (0-9): "); 
    ch2 = getchar(); 
    next_char = getchar(); // Yine fazladan karakter var mı diye kontrol edelim.

    // İlk kontroldeki mantığın aynısı: Kullanıcı birden fazla karakter girdiyse hata ver.
    if (next_char != '\n') {
        printf("\nHATA: Lutfen SADECE 0-9 Arasında rakamlar girin!\n");
        while (next_char != '\n') {
            next_char = getchar();
        }
        return 1;
    }

    // Girilenin bir rakam olduğundan emin olalım.
    if (!isdigit(ch2)) {
        printf("\nHATA: Girilen değer bir karakter olamaz! Lütfen sadece (0-9) arasında rakamlar giriniz.\n");
        return 1;
    }

    // Yine aynı ASCII hilesiyle karakteri sayıya çeviriyoruz.
    val2 = ch2 - '0';

    // Girilen ve kontrol edilen değerleri topluyoruz.
    sum = val1 + val2;
    // Girilen değerlerin toplamı 9'dan büyük olmaması için if fonksiyonu ile kontrol ediyoruz.
    if (sum > 9) {
        printf("\nHATA: Sayıların toplamı 9'dan büyük olamaz!\n"); 
        return 1; // Hata durumunda programdan çıkmalısın, yoksa yanlış sonuç basar.
    }
 
    printf("\nToplam : %c\n", sum + '0'); // sum + '0' ifadesi, sayısal toplamı tekrar karaktere dönüştürür. Örneğin, 3 + '0' = 3 + 48 = 51, bu da '3' karakteridir.
    return 0;
}
