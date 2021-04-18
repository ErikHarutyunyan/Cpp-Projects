// Задача 12  Сначала цифры.cpp

/* Написать программу, которая получает естественное число N (n ≤ 1000) в входе, а затем последовательность из N символов. Как результат программа должна излагать цифры последовательности, а затем остальные символы. Отображаемые символы должны быть разделены друг на друга по разметке. При решении проблемы использовать массив. */

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
    5 a 1 2 r 4

    Результат работы
    1 2 4 a r
    ====== Тест #2 =======
    Входные данные
    10 a s d @ # $ 7 8 9 1

    Результат работы
    7 8 9 1 a s d @ # $
    ====== Тест #3 =======
    Входные данные
    1000 < h X " O d ? 3 s P ? ^ ; p l | ^ ^ ) I & B " 2 h h v a a r M N 2 Q 2 a ! a ) N T s $ J [ Y X , 7 | = + m - f $ ] h c 0 x A 8 l d x m + C + y Z 9 U d E Y b = 6 ^ n ] y P 1 @ Y ^ . U 1 e 1 3 w U d y E / M i L 1 T B Y . 7 t ' . o g g . ` ' & k @ [ R % t O - \ # Y [ T k V ' H t L H I C _ t . K S l t y @ B + - " U Z 4 B M l C 0 L ^ ] v c 0 B z K P . ~ i } y ^ q C V [ c 5 Y U L % N V - 8 < a [ y [ P J ) k Q I ` ~ q z d ) Y / Q b M [ h E 7 f { V S ( F K ` ? 4 ? _ C - + O X 6 n V a & $ p w C C D U 3 B y w : s M < z A D | 7 Q ? i & 4 9 > ! + e E [ @ ; i b } $ @ E L d ` w B 1 ~ N ; s x B 6 p W 7 g m o = _ 7 B C ' i 3 & Y r G 3 j g a Z j . ^ z ^ U . 1 7 > t [ o - G " b ~ ` ( h : R ~ R ~ F E l Q S 0 J j F ^ x 4 u K y 4 F | X C ~ B ? O r + } | " j A C % w ? v w | S E = c 4 6 . @ H e q D a & 1 c % P | B " } g 0 9 | 7 n . # B 7 7 ` H v Q I i B g r r Q ; Q 5 c , ` C y x ( J m 1 W h @ 6 I a X _ g l 9 j l # 8 > d < E ^ O { 2 _ l 8 u f L _ _ P F w > i ( x 5 4 f X 1 b 9 v S p I < V q 0 [ E I P j > ' $ h Q , I 5 7 R 5 I T T ; I R 4 V E ~ . Q " @ n s u & 0 8 f 6 G U n ] 8 q u 6 7 j 2 T ! p ' " J ! t 5 E - E c ] r 2 : T ^ T j X V k 2 k [ z P R / m , / M ; I 5 d ( & b ^ Z m Z T " Q m t A a E d _ } j R H S [ o g | - ! F " $ J L E } J C b Z C a # & & r R T . " R o e V h / 9 t T < S ; l U 8 O q S _ Y t # L l 9 Y { { . o I Y G Y [ f Y \ K j S F ; r , O | 9 E 6 9 C T X p v G " ! ; M _ 3 K $ o $ . ] N q L > n = * M c a i x s J S v = @ l D : ' 0 { f e d 7 1 E J G \ K L { v n C T / h y G c Q N s C C \ = & ` , 5 6 g G . P 6 - r > F z L s b ( c [ J P { . o T a 7 a / ? h 4 6 ; W $ h c i m f x , D l _ 6 9 C % l a L r q ' F 1 m } 5 l c 0 ( V I [ V Y . 0 G H 1 e j K = n p p b 9 v h V ; x - / o z R 3 n ' ; L P W } 3 > y Z = 8 9 ' - | x u , 2 l z t } | > w k 8 | P 8 , g k U ` 8 F , < 8 g & z c ^ Z 0 s < \ ^ D { 3 | ! C H R y b 3 ` C q I g p 0 $ e S * k e < 8 < q & - 1 A X < b / a K q x q w ) b I ? T h - e ! A . z J p U l } * P G H ! m - F ' = a : B ~ ! . k 4 A " U / Y c 4 b t u } < U K X y 1 H A # { E 3

    Результат работы
    3 2 2 2 7 0 8 9 6 1 1 1 3 1 7 4 0 0 5 8 7 4 6 3 7 4 9 1 6 7 7 3 3 1 7 0 4 4 4 6 1 0 9 7 7 7 5 1 6 9 8 2 8 5 4 1 9 0 5 7 5 4 0 8 6 8 6 7 2 5 2 2 5 9 8 9 9 6 9 3 0 7 1 5 6 6 7 4 6 6 9 1 5 0 0 1 9 3 3 8 9 2 8 8 8 8 0 3 3 0 8 1 4 4 1 3 < h X " O d ? s P ? ^ ; p l | ^ ^ ) I & B " h h v a a r M N Q a ! a ) N T s $ J [ Y X , | = + m - f $ ] h c x A l d x m + C + y Z U d E Y b = ^ n ] y P @ Y ^ . U e w U d y E / M i L T B Y . t ' . o g g . ` ' & k @ [ R % t O - \ # Y [ T k V ' H t L H I C _ t . K S l t y @ B + - " U Z B M l C L ^ ] v c B z K P . ~ i } y ^ q C V [ c Y U L % N V - < a [ y [ P J ) k Q I ` ~ q z d ) Y / Q b M [ h E f { V S ( F K ` ? ? _ C - + O X n V a & $ p w C C D U B y w : s M < z A D | Q ? i & > ! + e E [ @ ; i b } $ @ E L d ` w B ~ N ; s x B p W g m o = _ B C ' i & Y r G j g a Z j . ^ z ^ U . > t [ o - G " b ~ ` ( h : R ~ R ~ F E l Q S J j F ^ x u K y F | X C ~ B ? O r + } | " j A C % w ? v w | S E = c . @ H e q D a & c % P | B " } g | n . # B ` H v Q I i B g r r Q ; Q c , ` C y x ( J m W h @ I a X _ g l j l # > d < E ^ O { _ l u f L _ _ P F w > i ( x f X b v S p I < V q [ E I P j > ' $ h Q , I R I T T ; I R V E ~ . Q " @ n s u & f G U n ] q u j T ! p ' " J ! t E - E c ] r : T ^ T j X V k k [ z P R / m , / M ; I d ( & b ^ Z m Z T " Q m t A a E d _ } j R H S [ o g | - ! F " $ J L E } J C b Z C a # & & r R T . " R o e V h / t T < S ; l U O q S _ Y t # L l Y { { . o I Y G Y [ f Y \ K j S F ; r , O | E C T X p v G " ! ; M _ K $ o $ . ] N q L > n = * M c a i x s J S v = @ l D : ' { f e d E J G \ K L { v n C T / h y G c Q N s C C \ = & ` , g G . P - r > F z L s b ( c [ J P { . o T a a / ? h ; W $ h c i m f x , D l _ C % l a L r q ' F m } l c ( V I [ V Y . G H e j K = n p p b v h V ; x - / o z R n ' ; L P W } > y Z = ' - | x u , l z t } | > w k | P , g k U ` F , < g & z c ^ Z s < \ ^ D { | ! C H R y b ` C q I g p $ e S * k e < < q & - A X < b / a K q x q w ) b I ? T h - e ! A . z J p U l } * P G H ! m - F ' = a : B ~ ! . k A " U / Y c b t u } < U K X y H A # { E
*/

#include <iostream>

int main()
{
    int n;
    char arr[1000];
    const int r = 1000;
    char sor[r]{};
    char tim[r]{};
    int j = 0;
    int m = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 48 && arr[i] <= 57)
        {
            sor[j] = arr[i];
            ++j;
        }
        else
        {
            tim[m] = arr[i];
            ++m;
        }
    }
    for (int i = 0; i < j; i++)
    {
        std::cout << sor[i] << " ";
    }

    for (int i = 0; i < m; i++)
    {
        std::cout << tim[i] << " ";
    }
}