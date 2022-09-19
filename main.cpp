#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //Hiányzik az alulvonás
    std::cout << "1-100 ertekek duplazasa" << std::endl;  //Rossz aposztróf és hiányzik a pontosvessző
    for (int i = 0; i <N_ELEMENTS ; i++)        //Hiányzik a léptetés a ciklusból
    {
        b[i] = (i+1) * 2;       //1-től 100-ig kéne de 0-tól 99-ig történik csak meg a duplázás
    }
    for (int i = 0; i<N_ELEMENTS; i++)     //Hibás ciklusvezérlő mindig hamisra fut le
    {
        std::cout << "Ertek:" <<b[i] <<std:: endl;      //Maga az érték nincs kiiratva
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0;              //változónak nincs kezdőértéke
    for (int i = 0; i < N_ELEMENTS; i++)         //Hiányzik egy pontosvessző
    {
        atlag += b[i];           //Hiányzik a pontosvessző
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
