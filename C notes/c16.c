// c16.c 31.07.2024 @alicemilozdemir
// syf 182 "5.12 : Bellek Sınıfları" konusundan
// syf 185 "5.13 : Kapsam Kuralları" konusuna kadar gelir

// değişken özellikleri isim(değişken ismi) ,tür(long int/short int) ,boyut(4byte ,8byte) ve değer(int a = 5) içerir
// kullanıcı tanımlı fonksiyonların isimleri de birer kimliktir.
// programdaki her kimlik bellek sınıfı ,bellek süresi ,kapsam ve bağlantı olmak üzere başka özellikler de içerir.

// C AUTO ,EXTERN ,STATIC ve register bellek sınıf belirteçlerini sağlar .REGİSTER ESKİDİR VE ARTIK KULLANILMAZ!
// BELLEK SINIF BELİRTEÇLERİ bellek sınıfı ,bellek süresi ,kapsam(program içi) ve bağlantı(programlar arası) özelliklerini belirler.

// kimlik süresi kimliğin hafızada var olduğu zaman boyunca geçen süredir.
    // bazıları kısa bir süre var olurlar, bazıları tekrar tekrar oluşturulur ve yok edilir ,
    // bazıları da programın sonuna kadar var olurlar

// Kimliğin kapsamı programda kimliğe referans verilen yerdir.
    // bazılarına program boyunca referans verilir diğerlerine yalnızca program parçalarında referans verilir
    // yerel değişkenler ve global değişkenlerden bahsediyor herhalde

// Bir kimlik bağlantısı çoklu-kaynak-dosyalı programlar için kimliğin sadece o kaynak dosyasında mı yoksa
// uygun açıklamalarla herhangi bir kaynak dosyasında mı bilindiğini belirler. 

//-----------------------------------------------------------
// Bellek sınıf belirteçleri otomatik saklama süresi(auto) ve durağan(static ,extern) saklama süresi olarak ikiye ayrılabilir.

// 1) Otomatik saklama süresi değişkenlerini tanımlamak için auto anahtar kelimesi kullanılır.
    // otomatik saklama süreli değişkenler tanımlandıkları yapıya girildiği zaman oluşturulur,
    // yapı aktif olduğu sürece var olurlar ve yapıdan çıkıldığında yok edilirler. 
    // sadece değişkenlerin otomatik saklama süresi vardır.
    // Bir fonksiyonun yerel değişkenleri(argüman olarak ya da fonk. içinde tanımlanmış olanlar) 
    // normalde otomatik saklama süresine sahiptir.Otomatik saklama süreli değişkenlere otomatik değişken diyeceğiz.

// 2) extern ve static anahtar kelimeleri durağan saklama süresinden değişkenler ve fonksiyonların kimlik tanımlamalarında kullanılır.
    // durağan kimlikler oluşturulduklarından program sonuna kadar var olurlar.
    //static değişkenler için program çalışmadan önce yalnızca 1 kez hafızadan yer ayrılır ve başlangıç değeri atanır.
    // Bununla birlikte program yürütmesi başlangıcından itibaren değişkenler ve fonksiyonlar var olsa bile,
    // Bu kimliklerin program boyunca erişilebilir olduğu anlamına gelmemektedir .Saklama süresi ve kapsam farklı konular.
    // Durağan saklama süreli kimliklerden bir kaç tür vardır :
    // 1) Dış kimlikler -genel değişkenler ve fonk. isimleri
    // 2) static saklama-sınıfı belirteçli tanımlanmış yerel değişkenler.
    // genel değişkenler ve fonk. isimleri varsayılan olarak EXTERN saklama sınıfındandır.
    // genel değişkenlerin değişken tanımlamaları herhangi bir fonksiyon dışında yapılarak oluşturulurlar ve
    // değerleri program boyunca korunur.
    // Genel değişkenler ve fonksiyonlara dosyada bildirimlerinden ve tanımlamalarından sonra 
    // gelen herhangi bir fonksiyon tarafından referans verilebilir. 
    // static anahtar kelimesi ile tanımlanmış değişkenler de yalnızca tanımlandıkları fonksiyon içinde tanınırlar.
    // Ancak auto değişkenlerden farklı olarak static yerel değişkenler fonk.'tan çıkıldığında değerlerini korurlar
    // fonk çağrıldığı sonraki sefer static yerel değişkenler fonksiyondan son çıkıldığında sahip olduğu değeri içerirler.
    // Durağan tüm sayısal değişkenler açıkça başlangıç değeri verilmezse 0'a eşit olur

// kimlik kapsamı kimliğin referans verildiği programın parçasıdır.
    // dört kimlik kapsamı :
    // 1) fonksiyon kapsamı
    // 2) dosya kapsamı
    // 3) yapı kapsamı
    // 4) fonksiyon bildirimi kapsamı

// etiketler yalnızca fonksiyon kapsamlı kimliklerdir.
// etiketler görüldüğü fonksiyonda herhangi bir yerde kullanılabilir ,ancak fonksiyon gövdesi dışında referans verilmez.
// etiketler switch ifadelerinde case etiketleri olarak kullanılır.

// herhangi bir fonksiyonun dışında tanımlanmış bir kimlik dosya kapsamlı bir kimliktir.
// bu kimlik ,kimliğin tanımlandığı noktadan dosya sonuna kadar tüm fonksiyonlarda tanınır.
// bir fonksiyonun dışında bulunan genel değişkenler ,fonksiyon tanımlamaları ve fonksiyon bildirimlerinin tümü
// dosya kapsamına sahiptir.

// bir yapı içinde tanımlanmış kimlikler yapı kapsamına sahiptir.Yapı kapsamı sonlandırıcı '}' ile biter
// fonksiyonun başında tanımlanmış yerel değişkenler fonksiyon tarafından yerel değişken olarak nitelenen fonksiyon
// parametreleri gibi yapı kapsamına sahiptir.
// yapılar kümelendiğinde bir iç yapımız ve bir dış yapımız olduğunu ve bu ikisinde de a isimli bir int değişken
// olduğunu düşünün .Bu durumda iç yapıda ,iç yapıdaki a değişkeni kullanılır ,dış yapıda da dış yapıdaki .
// static olarak ifade edilmiş yerel değişkenler de programa başlamadan önce var olsalar bile yapı kapsamına sahiptirler.
// saklama süresi kimliğin kapsamını etkilemez
// fonksiyon bildirimi kapsamlı tek kimlik fonksiyon bildiriminin parametre listesinde kullanılandır.
// fonksiyon bildirimi parametre listesinde isimlere ihtiyaç yoktur,sadece türler.Yazılsa bile derleyici görmezden gelir.
// fonksiyon bildiriminde kullanılan kimlikler programın başka bir yerinde belirsizlik yaratmadan kullanılabilirler.
