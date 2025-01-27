# std::streamsize

C++'da stream (akış), veri kaynağına veya hedefine doğru akan bir veri dizisini temsil eder. Stream'ler, girdi (input) ve çıktı (output) işlemlerini soyut bir şekilde ele alır. Örneğin, klavyeden veri okumak, dosyaya veri yazmak veya ekrana veri yazmak gibi işlemler stream'ler aracılığıyla gerçekleştirilir.

## stream nedir
Stream, bir veri kaynağından (örneğin, klavye, dosya) veya bir veri hedefine (örneğin, ekran, dosya) doğru akan bir veri dizisidir. Stream'ler, veri alışverişini soyut bir şekilde ele alır ve programcıya kolay bir arayüz sunar.
Örnek stream türleri:
+ std::cin: Standart girdi stream'i (klavyeden veri okur).
+ std::cout: Standart çıktı stream'i (ekrana veri yazar).
+ std::ifstream: Dosyadan veri okumak için kullanılan stream.
+ std::ofstream: Dosyaya veri yazmak için kullanılan stream.

## std::streamsize Nedir?
std::streamsize, C++'da stream'lerle ilgili işlemlerde kullanılan bir türdür. Genellikle bir akışın boyutunu (örneğin, okunan veya yazılan karakter sayısı) veya konumunu (örneğin, dosya içindeki pozisyon) temsil eder.
+ Tür: std::streamsize, genellikle bir tamsayı türüdür (örneğin, long veya long long).
+ Kullanım Amacı: Stream'lerle yapılan işlemlerde, okunan veya yazılan verinin boyutunu veya konumunu belirtmek için kullanılır.
```
std::streamsize count = std::cin.gcount(); // Son okuma işleminde kaç karakter okunduğunu döndürür.
```
## Stream ve std::streamsize İlişkisi
Stream'ler, veri alışverişi yaparken genellikle bir konum (position) veya boyut (size) bilgisi tutar. Örneğin:
+ Bir dosya stream'i (std::ifstream veya std::ofstream), dosyanın içindeki konumu (pozisyonu) takip eder.
+ std::cin veya std::cout gibi stream'ler, okunan veya yazılan karakter sayısını takip eder.

std::streamsize, bu tür bilgileri temsil etmek için kullanılan bir türdür. Örneğin:
+ Bir dosyadan 100 karakter okunduğunda, bu değer std::streamsize türünde saklanır.
+ std::cin.ignore() gibi fonksiyonlar, kaç karakterin görmezden gelineceğini belirtmek için std::streamsize türünü kullanır.
```
#include <iostream>
#include <fstream>

int main() {
    std::ifstream file("example.txt");
    if (!file) {
        std::cerr << "Dosya açılamadı!" << std::endl;
        return 1;
    }

    char buffer[100];
    file.read(buffer, sizeof(buffer)); // Dosyadan 100 karakter oku

    std::streamsize bytesRead = file.gcount(); // Okunan karakter sayısı
    std::cout << "Okunan karakter sayısı: " << bytesRead << std::endl;

    file.close();
    return 0;
}
```
```
#include <iostream>
#include <fstream>

int main() {
    // Dosyayı aç
    std::ifstream file("example.txt");
    if (!file) {
        std::cerr << "Dosya açılamadı!" << std::endl;
        return 1;
    }

    // Dosyanın başlangıç konumunu al
    std::streamsize startPos = file.tellg();
    std::cout << "Dosyanın başlangıç konumu: " << startPos << std::endl;

    // Dosyadan 10 karakter oku
    char buffer[10];
    file.read(buffer, sizeof(buffer));

    // Okunan karakter sayısını al
    std::streamsize bytesRead = file.gcount();
    std::cout << "Okunan karakter sayısı: " << bytesRead << std::endl;

    // Dosyanın mevcut konumunu al
    std::streamsize currentPos = file.tellg();
    std::cout << "Dosyanın mevcut konumu: " << currentPos << std::endl;

    // Dosyayı kapat
    file.close();

    return 0;
}
```