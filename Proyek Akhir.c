#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char simbol[119][4] = {"O", "H", "He", "Li", "Be", "B", "C", "N", "O", "F", "Ne", "Na", "Mg", "Al", "Si", "P", "S", "Cl", "Ar",
                    "K", "Ca", "Sc", "Ti", "V", "Cr", "Mn", "Fe", "Co", "Ni", "Cu", "Zn", "Ga", "Ge", "As", "Se", "Br", "Kr",
                    "Rb", "Sr", "Y", "Zr", "Nb", "Mo", "Tc", "Ru", "Rh", "Pd", "Ag", "Cd", "In", "Sn", "Sb", "Te", "I", "Xe",
                    "Cs", "Ba", "La", "Ce", "Pr", "Nd", "Pm", "Sm", "Eu", "Gd", "Tb", "Dy", "Ho", "Er", "Tm", "Yb", "Lu", "Hf",
                    "Ta", "W", "Re", "Os", "Ir", "Pt", "Au", "Hg", "Ti", "Pb", "Bi", "Po", "At", "Rn", "Fr", "Ra", "Ac",
                    "Th", "Pa", "U", "Np", "Pu", "Am", "Cm", "Bk", "Cf", "Es", "Fm", "Md", "No", "Lr", "Rf", "Db", "Sg", "Bh",
                    "Hs", "Mt", "Ds", "Rg", "Uub", "Uut", "Uuq", "Uup", "Uuh", "Uus", "Uuo"};
char nomor [119][4] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18",
                    "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36",
                    "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54",
                    "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72",
                    "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90",
                    "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107",
                    "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118"};
char nama[119][100] = {"Apapun", "Hidrogen", "Helium", "Litium", "Berilium", "Boron", "Karbon", "Nitrogen", "Oksigen", "Fluor", "Neon",
                    "Natrium", "Magnesium", "Alumunium", "Silikon", "Fosfor", "Belerang", "Khlor", "Argon", "Kalium", "Kalsium",
                    "Scandium", "Titan", "Vanadium", "Krom", "Mangan", "Besi", "Kobal", "Nikel", "Tembaga", "Seng", "Galium",
                    "Germanium", "Arsen", "Selen", "Brom", "Kripton", "Rubidium", "Stronsium", "Litrium", "Sirkon", "Niobium",
                    "Molibden", "Teknesium", "Rutenium", "Rodium", "Palsdium", " Perak", "Kadmium", "Indium", "Timah", "Antimon",
                    "Telurium", "Yodium", "Xenon", "Serenium", "Barium", "Lintanium", "Serium", "Praseoium", "Neodium", "Samarium",
                    "Europium", "Gadolinium", "Terbium", "Disprosium", "Holmium", "Erbium", "Tulium", "Ytterbium", "Lutetium",
                    "Hafnium", "Tantalum", "Wolfram", "Remium", "Osmium", "Irdium", "Platiina", "Emas", "Raksa", "Talium", "Timbal",
                    "Bismut", "Polanium", "Astatin", "Radon", "Fransium", "Radium", "Aktinium", "Torium", "Protaktium", " Uranium",
                    "Neptunium", "Plutonium", "Americium", "Kurium", "Berkelium", "Kalifornium", "Einstenium", "Fernium", "Mendelevium",
                    "Nobelium", "Lawrencium", "Ruterforcium", "Dubnium", "Seaborgium", "Bohrium", "Hassium", "Meiterium", "Darmstadium",
                    "Roentgium", "Ununbium", "Ununtrium", "Ununquadium", "Ununpentium", "Ununhxeium", "Ununseptium", "Ununoctium"};
char file[120][100]={"Apapun",
                "C:\Proyek Akhir\\1.txt", "C:\Proyek Akhir\\2.txt", "C:\Proyek Akhir\\3.txt", "C:\Proyek Akhir\\4.txt", "C:\Proyek Akhir\\5.txt",
                "C:\Proyek Akhir\\6.txt", "C:\Proyek Akhir\\7.txt", "C:\Proyek Akhir\\8.txt", "C:\Proyek Akhir\\9.txt", "C:\Proyek Akhir\\10.txt",
                "C:\Proyek Akhir\\11.txt", "C:\Proyek Akhir\\12.txt", "C:\Proyek Akhir\\13.txt", "C:\Proyek Akhir\\14.txt", "C:\Proyek Akhir\\15.txt",
                "C:\Proyek Akhir\\16.txt", "C:\Proyek Akhir\\17.txt", "C:\Proyek Akhir\\18.txt", "C:\Proyek Akhir\\19.txt", "C:\Proyek Akhir\\20.txt",
                "C:\Proyek Akhir\\21.txt", "C:\Proyek Akhir\\22.txt", "C:\Proyek Akhir\\23.txt", "C:\Proyek Akhir\\24.txt", "C:\Proyek Akhir\\25.txt",
                "C:\Proyek Akhir\\26.txt", "C:\Proyek Akhir\\27.txt", "C:\Proyek Akhir\\28.txt", "C:\Proyek Akhir\\29.txt", "C:\Proyek Akhir\\30.txt",
                "C:\Proyek Akhir\\31.txt", "C:\Proyek Akhir\\32.txt", "C:\Proyek Akhir\\33.txt", "C:\Proyek Akhir\\34.txt", "C:\Proyek Akhir\\35.txt",
                "C:\Proyek Akhir\\36.txt", "C:\Proyek Akhir\\37.txt", "C:\Proyek Akhir\\38.txt", "C:\Proyek Akhir\\39.txt", "C:\Proyek Akhir\\40.txt",
                "C:\Proyek Akhir\\41.txt", "C:\Proyek Akhir\\42.txt", "C:\Proyek Akhir\\43.txt", "C:\Proyek Akhir\\44.txt", "C:\Proyek Akhir\\45.txt",
                "C:\Proyek Akhir\\46.txt", "C:\Proyek Akhir\\47.txt", "C:\Proyek Akhir\\48.txt", "C:\Proyek Akhir\\49.txt", "C:\Proyek Akhir\\50.txt",
                "C:\Proyek Akhir\\51.txt", "C:\Proyek Akhir\\52.txt", "C:\Proyek Akhir\\53.txt", "C:\Proyek Akhir\\54.txt", "C:\Proyek Akhir\\55.txt",
                "C:\Proyek Akhir\\56.txt", "C:\Proyek Akhir\\57.txt", "C:\Proyek Akhir\\58.txt", "C:\Proyek Akhir\\59.txt", "C:\Proyek Akhir\\60.txt",
                "C:\Proyek Akhir\\61.txt", "C:\Proyek Akhir\\62.txt", "C:\Proyek Akhir\\63.txt", "C:\Proyek Akhir\\64.txt", "C:\Proyek Akhir\\65.txt",
                "C:\Proyek Akhir\\66.txt", "C:\Proyek Akhir\\67.txt", "C:\Proyek Akhir\\68.txt", "C:\Proyek Akhir\\69.txt", "C:\Proyek Akhir\\70.txt",
                "C:\Proyek Akhir\\71.txt", "C:\Proyek Akhir\\72.txt", "C:\Proyek Akhir\\73.txt", "C:\Proyek Akhir\\74.txt", "C:\Proyek Akhir\\75.txt",
                "C:\Proyek Akhir\\76.txt", "C:\Proyek Akhir\\77.txt", "C:\Proyek Akhir\\78.txt", "C:\Proyek Akhir\\79.txt", "C:\Proyek Akhir\\80.txt",
                "C:\Proyek Akhir\\81.txt", "C:\Proyek Akhir\\82.txt", "C:\Proyek Akhir\\83.txt", "C:\Proyek Akhir\\84.txt", "C:\Proyek Akhir\\85.txt",
                "C:\Proyek Akhir\\86.txt", "C:\Proyek Akhir\\87.txt", "C:\Proyek Akhir\\88.txt", "C:\Proyek Akhir\\89.txt", "C:\Proyek Akhir\\90.txt",
                "C:\Proyek Akhir\\91.txt", "C:\Proyek Akhir\\92.txt", "C:\Proyek Akhir\\93.txt", "C:\Proyek Akhir\\94.txt", "C:\Proyek Akhir\\95.txt",
                "C:\Proyek Akhir\\96.txt", "C:\Proyek Akhir\\97.txt", "C:\Proyek Akhir\\98.txt", "C:\Proyek Akhir\\99.txt", "C:\Proyek Akhir\\100.txt",
                "C:\Proyek Akhir\\101.txt", "C:\Proyek Akhir\\102.txt", "C:\Proyek Akhir\\103.txt", "C:\Proyek Akhir\\104.txt", "C:\Proyek Akhir\\105.txt",
                "C:\Proyek Akhir\\106.txt", "C:\Proyek Akhir\\107.txt", "C:\Proyek Akhir\\108.txt", "C:\Proyek Akhir\\109.txt", "C:\Proyek Akhir\\110.txt",
                "C:\Proyek Akhir\\111.txt", "C:\Proyek Akhir\\112.txt", "C:\Proyek Akhir\\113.txt", "C:\Proyek Akhir\\114.txt", "C:\Proyek Akhir\\115.txt",
                "C:\Proyek Akhir\\116.txt", "C:\Proyek Akhir\\117.txt", "C:\Proyek Akhir\\118.txt"};
char pilih[100];
char namaUnsur[100];
char nomorUnsur[100];
char simbolUnsur[100];
int baris;
char pilihanMenu[100];
int utama;
int i;
int j;
int t;
int s;
int g;

void main()
{
    while(1)
    {
        system("cls");
        printf("\n\n\t\tSelamat Datang di Program Smart Periodic Table");
        printf("\n\n\tPilih Menu di Bawah : ");
        printf("\n\n\t1. Periodik Tabel");
        printf("\n\t2. Nomor Unsur");
        printf("\n\t3. Simbol Unsur");
        printf("\n\t4. Nama Unsur");
        printf("\n\t5. Petunjuk");
        printf("\n\t6. Keluar");
        printf("\n\n\tPilihan Anda : ");
        gets(pilih);
        if(strcmp(pilih, "1") == 0)
        {
            system("cls");
            tabelPeriodik();
            getch();
        }
        else if(strcmp(pilih, "2") == 0)
        {
            system("cls");
            nomorunsur();
            getch();
        }
        else if(strcmp(pilih, "3") == 0)
        {
            system("cls");
            simbolunsur();
            getch();
        }
        else if(strcmp(pilih, "4") == 0)
        {
            system("cls");
            namaunsur();
            getch();
        }
        else if(strcmp(pilih, "5") == 0)
        {
            system("cls");
            printf("\n\n\tProgram Ini Adalah Program Smart Periodic Table");
            printf("\n\tBerikut Adalah Langkah-langkah Untuk Menggunakan Program Ini :");
            printf("\n\n\t1. Untuk Menampilkan Periodic Table, Pilih Menu '1' Periodic Table");
            printf("\n\n\t\tUntuk menampilkan data dapat dilakukan dengan 3 cara, yaitu");
            printf("\n\t1. Pilih Menu '2' untuk menampilkan data dengan memasukkan nomor atom");
            printf("\n\t2. Pilih Menu '3' untuk menampilkan data dengan memasukkan simbol atom");
            printf("\n\t3. Pilih Menu '4' untuk menampilkan data dengan memasukkan nama atom");
            getch();
        }
        else if(strcmp(pilih, "6") == 0)
        {
            system("cls");
            printf("\n\n\n\tTerima Kasih Telah Menggunakan Program Ini\n\n");
            break;
        }
        else
        {
            printf("\n\n\tPilihan Anda Salah");
            printf("\n\n\tSilahkan Masukkan Pilihan Kembali");
            getch();
        }
    }
}

void tabelPeriodik()
{
    for(baris = 1 ; baris <= 9 ; baris++ )
    {
        if(baris == 1)
        {
            printf("\n\t ");
            for(g = 1 ; g <= 10 ; g++)
            {
                if(g == 6)
                {
                    for(t =0 ; t <= 11 ; t++)
                    {
                        if(t == 11)
                        {
                            for(s = 0 ; s <= 14 ; s++)
                            {
                                printf(" ");
                            }
                        }
                        if(t!= 11)
                        {
                            printf("\t");
                        }
                    }
                }
                printf("_");
            }
            printf("\n\t|");
            for(i = 1 ; i <= 2 ; i++)
            {
                printf(" %s   |", nomor[i]);
                if(i == 1)
                {
                    for(t = 0 ; t <= 11 ; t++)
                    {
                        if(t == 11)
                        {
                            for(s = 0; s <= 14 ; s++)
                            {
                                if(s == 14)
                                {
                                    printf("|");
                                }
                                if(s != 14)
                                {
                                    printf(" ");
                                }
                            }
                        }
                        if(t != 11)
                        {
                            printf("\t");
                        }
                    }
                }
            }
            printf("\n\t|");
            for(i = 1 ; i <= 2 ; i++)
            {
                if(i == 1)
                {
                    printf(" %s   |", simbol[i]);
                    for(t = 0 ; t <= 11 ; t++)
                    {
                        if(t == 11)
                        {
                            for(s = 0; s <= 14 ; s++)
                            {
                                if(s == 14)
                                {
                                    printf("|");
                                }
                                if(s != 14)
                                {
                                    printf(" ");
                                }
                            }
                        }
                        if(t != 11)
                        {
                            printf("\t");
                        }
                    }
                }
                else
                {
                    printf(" %s  |", simbol[i]);
                }
            }
        }
        else if(baris == 2)
        {
            printf("\n\t|");
            for(i = 1 ; i <= 8 ; i++)
            {
                if(i == 1)
                {
                    printf("_____|");
                }
                else if(i == 2)
                {
                    printf("_____");
                    for(t=0 ; t <=7 ; t++)
                    {
                        printf("\t");
                    }
                    printf(" ");
                }
                else if(i == 7)
                {
                    printf("_____");
                }
                else if(i == 8)
                {
                printf("|_____|");
                }
                else
                {
                    printf("_____ ");
                }
            }
            printf("\n\t|");
            for(i = 3 ; i <= 10 ; i++)
            {
                if(i == 3)
                {
                    printf(" %s   |", nomor[i]);
                }
                else if(i == 4)
                {
                    printf(" %s   |", nomor[4]);
                    for(t=0 ; t <=7 ; t++)
                    {
                        printf("\t");
                    }
                }
                else if(i == 10)
                {
                    printf("| %s  |", nomor[i]);
                }
                else
                {
                    printf("| %s   ", nomor[i]);
                }
            }
            printf("\n\t|");
            for(i = 3 ; i <= 10 ; i++)
            {
                if(i == 3)
                {
                    printf(" %s  |", simbol[i]);
                }
                else if(i == 4)
                {
                    printf(" %s  |", simbol[i]);
                    for(t=0 ; t <=7 ; t++)
                    {
                        printf("\t");
                    }
                }
                else if(i == 10)
                {
                    printf("| %s  |", simbol[i]);
                }
                else
                {
                    printf("| %s   ", simbol[i]);
                }
            }
            printf("\n\t|");
            for(i = 1 ; i <= 8 ; i++)
            {
                if(i == 1)
                {
                    printf("_____|");
                }
                else if(i == 2)
                {
                    printf("_____|");
                    for(t=0 ; t <=7 ; t++)
                    {
                        printf("\t");
                    }
                }
                else if(i == 8)
                {
                    printf("|_____|");
                }
                else
                {
                    printf("|_____");
                }
            }
        }
        else if(baris == 3)
        {
            printf("\n\t|");
            for(i = 11 ; i <= 18 ; i++)
            {
                if(i == 11)
                {
                    printf(" %s  |", nomor[i]);
                }
                else if(i == 12)
                {
                    printf(" %s  |", nomor[i]);
                    for(t=0 ; t <=7 ; t++)
                    {
                        printf("\t");
                    }
                }
                else if(i == 18)
                {
                    printf("| %s  |", nomor[i]);
                }
                else
                {
                    printf("| %s  ", nomor[i]);
                }
            }
            printf("\n\t|");
            for(i = 11 ; i <= 18 ; i++)
            {
                if(i == 11)
                {
                    printf(" %s  |", simbol[i]);
                }
                else if(i == 12)
                {
                    printf(" %s  |", simbol[4]);
                    for(t=0 ; t <=7 ; t++)
                    {
                        printf("\t");
                    }
                }
                else if(i == 15 || i == 16)
                {
                    printf("| %s   ", simbol[i]);
                }
                else if(i == 18)
                {
                    printf("| %s  |", simbol[i]);
                }
                else
                {
                    printf("| %s  ", simbol[i]);
                }
            }
            printf("\n\t|");
            for(i = 1 ; i <= 8 ; i++)
            {
                if(i == 1)
                {
                    printf("_____|");
                }
                else if(i == 2)
                {
                    printf("_____|");
                    for(t=0 ; t <=9 ; t++)
                    {
                        if(t == 9)
                        {
                            printf("_____");
                        }
                        else
                        {
                            printf("_____ ");
                        }
                    }
                }
                else if(i == 8)
                {
                    printf("|_____|");
                }
                else
                {
                    printf("|_____");
                }
            }
        }
        else if(baris == 4)
        {
            printf("\n\t|");
            for(j = 19; j <= 36; j++)
            {
                printf(" %s  |", nomor[j]);
            }
            printf("\n\t|");
            for (i = 19 ; i <= 36 ; i++)
            {
                if(i == 19 || i == 23)
                {
                    printf(" %s   |", simbol[i]);
                }
                else
                {
                    printf(" %s  |", simbol[i]);
                }
            }
            printf("\n\t|");
            for(i = 1 ; i <= 18 ; i++)
            {
                printf("_____|");
            }
        }
        else if(baris == 5)
        {
            printf("\n\t|");
            for(j = 37; j <= 54; j++)
            {
                printf(" %s  |", nomor[j]);
            }
            printf("\n\t|");
            for (i = 37 ; i <= 54 ; i++)
            {
                if(i == 39 || i ==53)
                {
                    printf(" %s   |", simbol[i]);
                }
                else
                {
                    printf(" %s  |", simbol[i]);
                }
            }
            printf("\n\t|");
            for(i = 1 ; i <= 18 ; i++)
            {
                printf("_____|");
            }
        }
        else if(baris == 6)
        {
            printf("\n\t|");
            for(j = 55; j <= 86; j++)
            {
                if(j == 57)
                {
                    printf("     |");
                }
                else if(j>=58 && j<=71)
                {
                    continue;
                }
                else
                {
                    printf(" %s  |", nomor[j]);
                }
            }
            printf("\n\t|");
            for (i = 55 ; i <= 86 ; i++)
            {
                if(i == 57)
                {
                    printf("57-71|");
                }
                else if(i>=58 && i<=71)
                {
                    continue;
                }
                else if(i == 74)
                {
                    printf(" %s   |", simbol[i]);
                }
                else
                {
                    printf(" %s  |", simbol[i]);
                }
            }
            printf("\n\t|");
            for(i = 1 ; i <= 18 ; i++)
            {
                printf("_____|");
            }
        }
        else if(baris == 7)
        {
            printf("\n\t|");
            for(j = 87; j <= 118; j++)
            {
                if(j == 89)
                {
                    printf(" 89- |");
                }
                else if(j>=90 && j<=103)
                {
                    continue;
                }
                else if(j == 87 || j == 88)
                {
                    printf(" %s  |", nomor[j]);
                }
                else if(j >= 100 && j <= 118)
                {
                    printf(" %s |", nomor[j]);
                }
                else
                {
                    printf(" %s  |", nomor[j]);
                }
            }
            printf("\n\t|");
            for (i = 87 ; i <= 118 ; i++)
            {
                if(i == 89)
                {
                    printf(" 103 |");
                }
                else if(i>=90 && i<=103)
                {
                    continue;
                }
                else if (i >= 87 && i <= 111)
                {
                    printf(" %s  |", simbol[i]);
                }
                else
                {
                    printf(" %s |", simbol[i]);
                }
            }
            printf("\n\t|");
            for(i = 1 ; i <= 18 ; i++)
            {
                printf("_____|");
            }
        }
        else if(baris == 8)
        {
            printf("\n\n");
            printf("\n\t\t\t  ");
            for(i = 1 ; i <= 15 ; i++)
            {
                printf(" _____");
            }
            printf("\n\t\t\t  |");
            for(j = 57; j <= 71; j++)
            {
                printf(" %s  |", nomor[j]);
            }
            printf("\n\t\t\t  |");
            for (i = 57 ; i <= 71 ; i++)
            {
                printf(" %s  |", simbol[i]);
            }
            printf("\n\t\t\t  |");
            for(i = 1 ; i <= 15 ; i++)
            {
                printf("_____|");
            }
        }
        else if(baris == 9)
        {
            printf("\n\t\t\t  |");
            for(j = 89; j <= 103; j++)
            {
                if(j >= 100)
                {
                    printf(" %s |", nomor[j]);
                }
                else
                {
                    printf(" %s  |", nomor[j]);
                }
            }
            printf("\n\t\t\t  |");
            for (i = 89 ; i <= 103 ; i++)
            {
                if(i == 92)
                {
                    printf(" %s   |", simbol[i]);
                }
                else
                {
                    printf(" %s  |", simbol[i]);
                }
            }
            printf("\n\t\t\t  |");
            for(i = 1 ; i <= 15 ; i++)
            {
                printf("_____|");
            }
        }
    }
}

void nomorunsur()
{
    while(1)
    {
        system("cls");
        printf("\n\n\tSilahkan Pilih Menu di Bawah : ");
        printf("\n\t1. Masukkan Unsur");
        printf("\n\t2. Kembali ke Menu Utama");
        printf("\n\tPilihan Anda : ");
        gets(pilihanMenu);
        if(strcmp(pilihanMenu, "1") == 0)
        {
            system("cls");
            printf("\n\n\tContoh Nomor Unsur : 1");
            printf("\n\n\n\tMasukkan Nomor Unsur : ");
            gets(nomorUnsur);
            for(i = 1 ; i <= 118 ; i++)
            {
                if(strcmp(nomor[i], nomorUnsur) == 0)
                {
                    printf("\n\n\tUnsur Dengan Nomor Unsur %s Adalah", nomorUnsur);
                    txt();
                    getch();
                    return nomorunsur();
                }
                else
                {
                    continue;
                }
            }
            printf("\n\n\tNomor Unsur Yang Anda Masukkan Salah");
            printf("\n\tSilahkan Masukkan Kembali");
            getch();
        }
        else if(strcmp(pilihanMenu, "2") == 0)
        {
            printf("\n\n\tTekan Enter");
            break;
        }
        else
        {
            printf("\n\n\tPilihan Anda Salah");
            printf("\n\tSilahkan Masukkan Pilihan Kembali");
            getch();
        }
    }
}

void simbolunsur()
{
    while(1)
    {
        system("cls");
        printf("\n\n\tSilahkan Pilih Menu di Bawah : ");
        printf("\n\t1. Masukkan Unsur");
        printf("\n\t2. Kembali ke Menu Utama");
        printf("\n\tPilihan Anda : ");
        gets(pilihanMenu);
        if(strcmp(pilihanMenu, "1") == 0)
        {
            system("cls");
            printf("\n\n\tContoh Simbol Unsur : H");
            printf("\n\n\n\tMasukkan Simbol Unsur : ");
            gets(simbolUnsur);
            for(i = 1 ; i <= 118 ; i++)
            {
                if(strcmp(simbol[i], simbolUnsur) == 0)
                {
                    printf("\n\n\tUnsur Dengan Simbol Unsur %s adalah", simbol[i]);
                    txt();
                    getch();
                    return simbolunsur();
                }
                else
                {
                    continue;
                }
            }
            printf("\n\n\tSimbol Yang Anda Masukkan Salah");
            printf("\n\n\tSilahkan Masukkan Kembali");
            getch();
        }
        else if(strcmp(pilihanMenu, "2") == 0)
        {
            printf("\n\n\tTekan Enter");
            break;
        }
        else
        {
            printf("\n\n\tPilihan Anda Salah");
            printf("\n\tSilahkan Masukkan Pilihan Kembali");
            getch();
        }
    }
}

void namaunsur()
{
    while(1)
    {
        system("cls");
        printf("\n\n\tSilahkan Pilih Menu di Bawah : ");
        printf("\n\t1. Masukkan Unsur");
        printf("\n\t2. Kembali ke Menu Utama");
        printf("\n\tPilihan Anda : ");
        gets(pilihanMenu);
        if(strcmp(pilihanMenu, "1") == 0)
        {
            system("cls");
            printf("\n\n\tContoh Nama Unsur : Hidrogen");
            printf("\n\n\n\tMasukkan Nama Unsur : ");
            gets(namaUnsur);
            for(i = 1; i <= 118 ; i++)
            {
                if(strcmp(nama[i], namaUnsur) == 0)
                {
                    printf("\n\n\tUnsur Dengan Nama %s Adalah", nama[i]);
                    txt();
                    getch();
                    return namaunsur();
                }
                else
                {
                    continue;
                }
            }
            printf("\n\n\tNama Unsur Yang Anda Masukkan Salah");
            printf("\n\n\tSilahkan Masukkan Kembali");
            getch();
        }
        else if(strcmp(pilihanMenu, "2") == 0)
        {
            printf("\n\n\tTekan Enter");
            break;
        }
        else
        {
            printf("\n\n\tPilihan Anda Salah");
            printf("\n\tSilahkan Masukkan Pilihan Kembali");
            getch();
        }
    }
}

void txt()
{
    char nama[100];
    FILE * data = fopen(file[i], "r");
    printf("\n\n");
    while(fgets(nama, 100, data) != NULL)
    {
        printf("\t%s", nama);
    }
    fclose(data);
}
