#include <stdio.h>
#include <stdlib.h>

int rules();
int display();
int General();
int Science();
int History();
int Literature();
int Movies();
int Music();
int Sports();
int Geography();
int Language();

int main()
{
    rules();
    display();
}

int rules()
{
    printf("\n          ---------Welcome to the quiz game-----------");
    printf("\n            ------------------Rules------------------");
    printf("\n");
    printf("\n          1.You will be given one question at a time.");
    printf("\n          2.Each question carries 1 point.");
    printf("\n          3.In catageory the questions will asked related to your field.");
    printf("\n          4.There are Total 3 levels for each category.");
    printf("\n          5.Minimum marks required to pass the level.");
    printf("\n          6.First level=7 Second Level=14 Third Level=21.");
    printf("\n          7.You have to enter the correct option from a,b,c,d.");
    printf("\n          8.The result will be displayed at the end of the level.");
    printf("\n          9.To play next level you should score minimum 7 points in each level.");
    printf("\n");
}

int display()
{
    char yes_no;
    int category;
    printf("\n   Do you want start the game (y or n)=");
    scanf("%c", &yes_no);
    if (yes_no == 'y' || yes_no == 'Y')
    {
        printf("\n        ----Categories----");
        printf("\n  1.General.                 2.Science and Nature.");
        printf("\n  3.History and Politices.   4.Literature and Arts.");
        printf("\n  5.Movies and Tv Shows.     6.Music.");
        printf("\n  7.Sports.                  8.Geography.");
        printf("\n  9.Technology.              10.Language and Words.");
        printf("\n");
        printf("\n Chose Category=");
        scanf("%d", &category);
    }
    else
    {
        if (yes_no == 'N' || yes_no == 'n')
        {
            printf("\nExited");
            exit(0);
        }
        else
        {
            printf("\nInvalid input please enter valid character.");
        }
    }
    switch (category)
    {
    case 1:
        General();

        break;

    default:
        printf("You have entered wrong option please ");
        break;
    }
}

int General()
{
    int count = 8, answer;
    char next;
    printf("\n     -------Welcome to the world of General knowledge--------");
    printf("\n Directly enter the option number from 1,2,3 or 4 for answers");

    printf("\n           ----------First Level---------");
    printf("\n");
    printf("\n    1. Which planet is known as the Red Planet?");
    printf("\n      1) Venus  2) Mars");
    printf("\n      3) Jupiter  4) Saturn");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n    2. What is the capital city of France?");
    printf("\n       1) London  2) Paris");
    printf("\n       3) Rome    4) Madrid");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n    3. Which ocean is the largest on Earth?");
    printf("\n       1) Indian Ocean  2) Atlantic Ocean");
    printf("\n       3) Arctic Ocean  4) Pacific Ocean");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 4)
    {
        count++;
    }

    printf("\n    4. Who painted the Mona Lisa?");
    printf("\n      1) Pablo Picasso      2) Vincent van Gogh");
    printf("\n      3) Leonardo da Vinci  4) Claude Monet");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3)
    {
        count++;
    }

    printf("\n    5. What is the hardest natural substance on Earth?");
    printf("\n      1) Gold          2) Iron");
    printf("\n      3) Diamond       4) Silver");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3)
    {
        count++;
    }

    printf("\n    6. Which is the longest river in the world?");
    printf("\n      1) Nile     2) Amazon");
    printf("\n      3) Yangtze  4) Mississippi");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1)
    {
        count++;
    }

    printf("\n    7. How many continents are there in the world?");
    printf("\n      1)Five  2)Seven");
    printf("\n      3)Six  4)Eight");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n    8. Which country is famous for the kangaroo?");
    printf("\n      1)Australia  2)South Africa");
    printf("\n      3)Brazil  4)Canada");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1)
    {
        count++;
    }

    printf("\n    9. Who wrote Romeo and Juliet ?");
    printf("\n      1) F.Scott Fitzgerald  2) Jane Austen");
    printf("\n      3) Charles Dickens      4) William Shakespeare");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 4)
    {
        count++;
    }

    printf("\n    10. What is the capital of the United States?");
    printf("\n      1) New York City  2) Washington, D.C.");
    printf("\n      3) Los Angeles    4) Chicago");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n           ----------Second Level---------");
    printf("\n");
    printf("\n    11. Which ancient wonder of the world was located in Babylon?");
    printf("\n      1) Great Pyramid of Giza  2) Hanging Gardens of Babylon");
    printf("\n      3) Colossus of Rhodes     4) Temple of Artemis at Ephesus");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n    12. What is the smallest country in the world by land area?");
    printf("\n      1) Monaco        2) San Marino ");
    printf("\n      3) Vatican City  4) Liechtenstein");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3)
    {
        count++;
    }

    printf("\n    13. Who was the first woman to win a Nobel Prize?");
    printf("\n      1) Marie Curie  2) Mother Teresa");
    printf("\n      3) Rosa Parks   4) Jane Addams");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1)
    {
        count++;
    }

    printf("\n    14. In which year did the Titanic sink?");
    printf("\n      1) 1910  2) 1912");
    printf("\n      3) 1915  4) 1918");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n    15. Which artist painted The Persistence of Memory ?");
    printf("\n      1) Claude Monet      2) Pablo Picasso");
    printf("\n      3) Vincent van Gogh  4) Salvador Dalí ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 4)
    {
        count++;
    }

    printf("\n    16. Which physicist formulated the theory of general relativity?");
    printf("\n      1) Isaac Newton     2) Max Planck");
    printf("\n      3) Albert Einstein  4) Niels Bohr");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3)
    {
        count++;
    }

    printf("\n    17. What is the deepest part of the world's oceans?");
    printf("\n      1) Puerto Rico Trench  2) Mariana Trench");
    printf("\n      3) Java Trench         4) Philippine Trench");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n    18. Which country is known as the Land of the Thunder Dragon?");
    printf("\n      1) Nepal   2) Tibet");
    printf("\n      3) Bhutan  4) Mongolia");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3)
    {
        count++;
    }

    printf("\n    19. Who wrote the novel One Hundred Years of Solitude ?");
    printf("\n      1) Gabriel García Márquez  2)  Jorge Luis Borges");
    printf("\n      3) Mario Vargas Llosa      4)  Isabel Allende");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1)
    {
        count++;
    }

    printf("\n    20. What is the largest desert in the world after Antarctica?");
    printf("\n      1) Sahara Desert    2) Arabian Desert");
    printf("\n      3) Kalahari Desert  4) Gobi Desert");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 4)
    {
        count++;
    }

    printf("\n           ----------Third Level---------");
    printf("\n    21. In which year was the Magna Carta signed?");
    printf("\n      1) 1215  2) 1300");
    printf("\n      3) 1066  4) 1492");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1)
    {
        count++;
    }

    printf("\n    22. What is the world's longest mountain range?");
    printf("\n      1) Himalayas  2) Alps");
    printf("\n      3) Andes      4) Rockies");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer = 3)
    {
        count++;
    }

    printf("\n    23. Who was the first woman to win a Nobel Prize");
    printf("\n      1) Marie Curie        2) Mother Teresa");
    printf("\n      3) Rosalind Franklin  4) Jane Goodall");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1)
    {
        count++;
    }

    printf("\n    24. Which ancient wonder was located in the city of Babylon?");
    printf("\n      1) Colossus of Rhodes        2) Hanging Gardens");
    printf("\n      3) Lighthouse of Alexandria  4) Great Pyramid of Giza");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n   25. Which element has the chemical symbol Fe ? ");
    printf("\n      1) Gold  2) Silver");
    printf("\n      3) Iron  4) Zinc");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3)
    {
        count++;
    }

    printf("\n    26. Who composed the famous classical music piece The Four Seasons ?");
    printf("\n      1) Ludwig van Beethoven  2)  Johann Sebastian Bach");
    printf("\n      3) Antonio Vivaldi       4) Wolfgang Amadeus Mozart");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3)
    {
        count++;
    }

    printf("\n    27. Which scientist first proposed the theory of general relativity?");
    printf("\n      1) Isaac Newton     2) Albert Einstein");
    printf("\n      3) Galileo Galilei  4) Stephen Hawking");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n    28. Which city is located furthest south?");
    printf("\n      1) Sydney        2) Cape Town");
    printf("\n      3) Buenos Aires  4) Wellington");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 4)
    {
        count++;
    }

    printf("\n    29. What is the currency of Brazil?");
    printf("\n      1) Peso  2) Rupee");
    printf("\n      3) Real  4) Baht");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3)
    {
        count++;
    }

    printf("\n    30. Who painted the famous artwork Starry Night ?");
    printf("\n      1) Pablo Picasso  2) Vincent van Gogh");
    printf("\n      3) Claude Monet  4) Leonardo da Vinc");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }
    printf("\nYou scored %d out of 30.\n", count);

}

int Science()
{
    int count = 0, answer;
    printf("\n     -------Welcome to the world of Science and Nature--------");
    printf("\n Directly enter the option number from 1,2,3 or 4 for answers");

    printf("\n           ----------First Level---------");
    printf("\n    1. What is the phenomenon responsible for the appearance of different colors in soap bubbles ?");
    printf("\n      1) Diffraction   2) Dispersion");
    printf("\n      3) Reflection    4) Refraction ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n    2. Which subatomic particle is involved in the process of radioactive decay and is essentially an electron emitted from the nucleus of an atom ?");
    printf("\n      1) Proton           2) Neutron");
    printf("\n      3) Beta particle    4) Positron ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3)
    {
        count++;
    }
    printf("\n    3. Which type of rock is formed from the cooling and solidification of magma or lava ?");
    printf("\n      1) Metamorphic   2) Sedimentary");
    printf("\n      3) Igneous       4) Conglomerate ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3)
    {
        count++;
    }
    printf("\n    4. What is the largest organ in the human body ?");
    printf("\n      1) Liver   2) Skin");
    printf("\n      3) Brain   4) Lungs ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }
    printf("\n    5. Which famous scientist developed the theory of general relativity ?");
    printf("\n      1) Isaac Newton       2) Albert Einstein");
    printf("\n      3) Galileo Galilei    4) Stephen Hawking");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }
    printf("\n    6. What is the name of the process by which plants convert light energy into chemical energy ?");
    printf("\n      1) Photosynthesis   2) Respiration");
    printf("\n      3) Transpiration    4) Fermentation ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1)
    {
        count++;
    }
    printf("\n    7. Which gas makes up the largest percentage of the Earth's atmosphere by volume ?");
    printf("\n      1) Oxygen      2) Argon");
    printf("\n      3) Nitrogen    4) Carbon dioxide ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3)
    {
        count++;
    }

    printf("\n    8. Which is the only planet in our solar system known to have liquid water on its surface ?");
    printf("\n      1) Venus      2) Mars");
    printf("\n      3) Jupiter    4) Earth");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 4)
    {
        count++;
    }

    printf("\n    9. What is the unit of measurement for electric resistance ?");
    printf("\n      1) Joule   2) Ohm");
    printf("\n      3) Watt    4) Volt ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n    10. Which species of flower is famous for being the largest in the world ?");
    printf("\n      1) Sunflower   2) Lily");
    printf("\n      3) Orchid      4) Rafflesia ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 4)
    {
        count++;
    }

    printf("\n           ----------Second Level---------");
    printf("\n    11. Which particle is responsible for carrying the electromagnetic force in atoms ?");
    printf("\n      1) Proton   2) Neutron");
    printf("\n      3) Photon   4) Electron ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3)
    {
        count++;
    }

    printf("\n    12. What is the largest species of big cat in the world ?");
    printf("\n      1) Lion      2) Tiger");
    printf("\n      3) Jaguar    4) Leopard ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n    13. What phenomenon is responsible for the formation of rainbows ?");
    printf("\n      1) Dispersion   2) Reflection");
    printf("\n      3) Refraction    4) Diffraction ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1)
    {
        count++;
    }

    printf("\n   14. Which gas makes up the majority of Earth's atmosphere by volume ? ");
    printf("\n      1) Oxygen            2) Nitrogen");
    printf("\n      3) Carbon dioxide    4) Argon ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n   15. Who proposed the theory of general relativity ?");
    printf("\n      1) Albert Einstein   2) Isaac Newton");
    printf("\n      3) Stephen Hawking   4)  Galileo Galilei ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1)
    {
        count++;
    }

    printf("\n    16. What is the deepest known point in the Earth's oceans ?");
    printf("\n      1) Puerto Rico Trench   2) Mariana Trench");
    printf("\n      3) Tonga Trench         4) Java Trench ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n    17. Which type of rock is formed from the cooling and solidification of lava or magma ?");
    printf("\n      1) Sedimentary   2) Metamorphic");
    printf("\n      3) Igneous       4) Erosion ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3)
    {
        count++;
    }

    printf("\n    18. What is the scientific name for the process by which plants convert sunlight into energy ?");
    printf("\n      1) Respiration      2) Germination");
    printf("\n      3) Transpiration    4) Photosynthesis ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 4)
    {
        count++;
    }

    printf("\n    19. What is the unit of measurement for electrical resistance ?");
    printf("\n      1) Ampere   2) Ohm");
    printf("\n      3) Watt     4) Volt ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n    20. Which mammal is capable of sustained flight ?");
    printf("\n      1) Bat                2) Pigeon");
    printf("\n      3) Flying squirrel    4) Flying fish ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1)
    {
        count++;
    }

    printf("\n           ----------Third Level---------");
    printf("\n    21. What is the fundamental force that holds the nucleus of an atom together ?");
    printf("\n       1) Electromagnetic force   2) Strong nuclear force");
    printf("\n       3) Weak nuclear force      4) Gravitational force");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n    22) Which animal is known to never sleep ?");
    printf("\n       1) Elephant    2) Bullfrog");
    printf("\n       3) Giraffe     4) Bottlenose dolphin");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n    23) What is the largest organ in the human body ?");
    printf("\n       1) Liver       2) Brain");
    printf("\n       3) Skin        4) Lungs");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3)
    {
        count++;
    }

    printf("\n    24) What phenomenon causes the sky to appear blue ?");
    printf("\n        1) Refraction                 2) Diffraction");
    printf("\n        3) Total internal reflection  4) Rayleigh scattering");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 4)
    {
        count++;
    }

    printf("\n    25) Which planet in our solar system has the most moons ?");
    printf("\n       1) Saturn      2) Jupiter");
    printf("\n       3) Uranus      4) Neptune");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n    26) What is the chemical symbol for gold ?");
    printf("\n           1) Au      2) Ag");
    printf("\n           3) Go      4) Gl");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1)
    {
        count++;
    }

    printf("\n   27) Which gas is the most abundant in the Earth's atmosphere ?");
    printf("\n      1) Nitrogen            2) Oxygen");
    printf("\n      3) Carbon dioxide      4) Argon");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1)
    {
        count++;
    }

    printf("\n   28) What is the hardest natural substance on Earth ?");
    printf("\n      1) Diamond    2) Quartz");
    printf("\n      3) Graphite   4) Ruby");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1)
    {
        count++;
    }

    printf("\n   29) Which scientist first proposed the theory of general relativity ?");
    printf("\n      1) Albert Einstein  2) Isaac Newton");
    printf("\n      3) Galileo Galilei   4) Stephen Hawking");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1)
    {
        count++;
    }

    printf("\n   30) What type of galaxy is the Milky Way ?");
    printf("\n      1) Spiral     2) Elliptical");
    printf("\n      3) Irregular  4) Lenticular");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1)
    {
        count++;
    }
 
  printf("\nYou scored %d out of 30.\n", count);

}

int History()
{

    int count = 0, answer;
    printf("\n     -------Welcome to the world of History and Politics --------");
    printf("\n Directly enter the option number from 1,2,3 or 4 for answers");

    printf("\n           ----------First Level---------");
    printf("\n  1) Who was the first President of the United States ?");
    printf("\n     1) Thomas Jefferson     2) George Washington");
    printf("\n     3) John Adams            4) Abraham Lincoln");
    printf("\nAnswer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n   2) Which ancient civilization built the Great Pyramids of Giza ?");
    printf("\n     1) Greeks                2) Romans");
    printf("\n     3) Egyptians             4) Persians");
    printf("\nAnswer=");
    scanf("%d", &answer);
    if (answer == 3)
    {
        count++;
    }

    printf("\n   3) Who wrote the famous play 'Hamlet' ?");
    printf("\n      1) William Shakespeare   2) Charles Dickens");
    printf("\n      3) Jane Austen            4) Mark Twain");
    printf("\nAnswer=");
    scanf("%d", &answer);
    if (answer == 1)
    {
        count++;
    }

    printf("\n   4) What year did World War II end ?");
    printf("\n     1) 1943                  2) 1945");
    printf("\n     3) 1950                  4) 1918");
    printf("\nAnswer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n   5) Who was the first female Prime Minister of the United Kingdom ?");
    printf("\n      1) Margaret Thatcher     2) Angela Merkel");
    printf("\n      3) Theresa May            4) Indira Gandhi");
    printf("\nAnswer=");
    scanf("%d", &answer);
    if (answer == 1)
    {
        count++;
    }

    printf("\n   6) Where was the Magna Carta signed ?");
    printf("\n     1) Paris                 2) London");
    printf("\n     3) Rome                  4) Canterbury");
    printf("\nAnswer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n   7) Who was the longest-serving President of the United States ?");
    printf("\n      1) Franklin D. Roosevelt 2) George Washington");
    printf("\n      3) Abraham Lincoln        4) Ronald Reagan");
    printf("\nAnswer=");
    scanf("%d", &answer);
    if (answer == 1)
    {
        count++;
    }

    printf("\n   8) Which war was fought between the North and South regions of the United States ?");
    printf("\n      1) World War I            2) Cold War");
    printf("\n      3) American Civil War     4) Vietnam War");
    printf("\nAnswer=");
    scanf("%d", &answer);
    if (answer == 3)
    {
        count++;
    }

    printf("\n   9) Who was the first President of Russia ?");
    printf("\n      1) Vladimir Putin         2) Mikhail Gorbachev");
    printf("\n      3) Boris Yeltsin          4) Leonid Brezhnev");
    printf("\nAnswer=");
    scanf("%d", &answer);
    if (answer == 3)
    {
        count++;
    }

    printf("\n   10) What was the capital of the Byzantine Empire ?");
    printf("\n       1) Rome                  2) Constantinople");
    printf("\n       3) Athens                4) Alexandria");
    printf("\nAnswer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n           ----------Second Level---------");
    printf("\n    11) Who was the first President of the United States ?");
    printf("\n      1) George Washington     2) Thomas Jefferson");
    printf("\n      3) Benjamin Franklin     4) John Adams");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1)
    {
        count++;
    }

    printf("\n    12) What event marked the beginning of World War II ?");
    printf("\n       1) Bombing of Pearl Harbor     2) Invasion of Poland");
    printf("\n       3) Treaty of Versailles        4) Battle of Stalingrad");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n    13) Who wrote 'The Communist Manifesto' ?");
    printf("\n       1) Karl Marx      2) Friedrich Engels");
    printf("\n       3) Lenin          4) Stalin");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1)
    {
        count++;
    }

    printf("\n    14) Which country was NOT part of the Axis Powers in World War II ?");
    printf("\n        1) Germany       2) Italy");
    printf("\n        3) Japan         4) France");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 4)
    {
        count++;
    }

    printf("\n    15) When was the Magna Carta signed ?");
    printf("\n        1) 1066         2) 1215");
    printf("\n        3) 1492         4) 1776");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n    16) Who was the first Prime Minister of India ?");
    printf("\n        1) Mahatma Gandhi        2) Jawaharlal Nehru");
    printf("\n        3) Indira Gandhi         4) Sardar Vallabhbhai Patel");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n    17) What year did the Berlin Wall fall ?");
    printf("\n        1) 1985         2) 1989");
    printf("\n        3) 1991         4) 1975");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n    18) Who was the first female Prime Minister of the United Kingdom ?");
    printf("\n        1) Margaret Thatcher      2) Theresa May");
    printf("\n        3) Angela Merkel          4) Indira Gandhi");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1)
    {
        count++;
    }

    printf("\n    19) What was the name of the ship that brought the Pilgrims to America in 1620 ?");
    printf("\n        1) Mayflower      2) Santa Maria");
    printf("\n        3) Nina           4) Victoria");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1)
    {
        count++;
    }

    printf("\n    20) Who was the longest-serving President of the United States ?");
    printf("\n        1) Franklin D. Roosevelt      2) George Washington");
    printf("\n        3) Thomas Jefferson           4) Abraham Lincoln");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1)
    {
        count++;
    }

    printf("\n           ----------Third Level---------");
    printf("\n    21) Which battle marked the end of Napoleon's military career ?");
    printf("\n        1) Battle of Waterloo                 2) Battle of Austerlitz");
    printf("\n        3) Battle of Borodino     4) Battle of Trafalgar ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1)
    {
        count++;
    }

    printf("\n    22) Who was the longest-serving Prime Minister of the United Kingdom in the 20th century ?");
    printf("\n        1) Winston Churchill    2) Margaret Thatcher");
    printf("\n        3) Tony Blair           4) Harold Wilson ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 4)
    {
        count++;
    }

    printf("\n    23) The Treaty of Versailles was signed in which year ?");
    printf("\n        1) 1918     2) 1919");
    printf("\n        3) 1920     4) 1921 ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n    24) Who was the first President of the United States ?");
    printf("\n        1) Thomas Jefferson      2) Benjamin Franklin");
    printf("\n        3) George Washington     4) John Adams ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3)
    {
        count++;
    }

    printf("\n    25) What was the name of the policy of racial segregation in South Africa ?");
    printf("\n        1) Apartheid  2) Jim Crow");
    printf("\n        3) Nazism     4) Fascism ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1)
    {
        count++;
    }

    printf("\n    26) Which famous political document begins with the words 'When in the course of human events' ?");
    printf("\n        1) The Magna Carta                     2) The U.S. Constitution");
    printf("\n        3) The Declaration of Independence     4) The Communist Manifesto ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3)
    {
        count++;
    }

    printf("\n    27) Which Roman Emperor famously made Christianity legal in the Roman Empire ?");
    printf("\n        1) Julius Caesar   2) Constantine the Great");
    printf("\n        3) Nero            4) Augustus ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }

    printf("\n    28) Who wrote the book 'The Prince', which discusses politics and leadership ?");
    printf("\n        1) Plato                   2) Aristotle");
    printf("\n        3) Niccolò Machiavelli     4) Sun Tzu ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3)
    {
        count++;
    }

    printf("\n    29) The Bolshevik Revolution of 1917 took place in which country ?");
    printf("\n        1) Germany    2) Italy");
    printf("\n        3) Russia     4) France ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3)
    {
        count++;
    }

    printf("\n    30) Who was the first female Prime Minister of India ?");
    printf("\n        1) Sonia Gandhi          2) Indira Gandhi");
    printf("\n        3) Margaret Thatcher     4) Golda Meir ");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2)
    {
        count++;
    }
 printf("\nYou scored %d out of 30.\n", count);

}

int Literature()
{
    int count=0,answer;
    printf("\n     -------Welcome to the world of Literature and Arts--------");
    printf("\n Directly enter the option number from 1,2,3 or 4 for answers");

    printf("\n           ----------First Level---------");
    printf("\n    1)Which Shakespeare play is known for the phrase 'To be, or not to be' ?");
    printf("\n       1) Hamlet               2) Macbeth");
    printf("\n       3) Romeo and Juliet     4) Othello");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }


    printf("\n    2) Who painted the Mona Lisa ?");
    printf("\n      1) Vincent van Gogh     2) Leonardo da Vinci");
    printf("\n      3) Pablo Picasso        4) Michelangelo");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }


    printf("\n    3) Which novel by Jane Austen features the character Elizabeth Bennet ?");
    printf("\n       1) Sense and Sensibility      2) Emma");
    printf("\n       3) Pride and Prejudice        4) Mansfield Park");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }


    printf("\n    4) Who wrote '1984' ?");
    printf("\n      1) George Orwell        2) Aldous Huxley");
    printf("\n      3) Ernest Hemingway     4) F. Scott Fitzgerald");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }


    printf("\n    5) Which artist is famous for cutting off part of his own ear ?");
    printf("\n       1) Claude Monet         2) Edgar Degas");
    printf("\n       3) Vincent van Gogh     4) Pablo Picasso");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }


    printf("\n    6) Who wrote 'Romeo and Juliet' ?");
    printf("\n       1) William Wordsworth   2) William Shakespeare");
    printf("\n       3) John Milton          4) Geoffrey Chaucer");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }


    printf("\n    7) Which musical features the song 'Memory' ?");
    printf("\n       1) Cats                       2) Les Misérables");
    printf("\n       3) The Phantom of the Opera   4) Wicked");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }


    printf("\n    8) Who painted 'Starry Night' ?");
    printf("\n      1) Salvador Dalí        2) Vincent van Gogh");
    printf("\n      3) Pablo Picasso        4) Claude Monet");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }


    printf("\n    9) Which play by Tennessee Williams features the character Blanche DuBois ?");
    printf("\n       1) A Streetcar Named Desire   2) The Glass Menagerie");
    printf("\n       3) Cat on a Hot Tin Roof      4) Suddenly Last Summer");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n    10) Who wrote the novel 'Moby-Dick' ?");
    printf("\n        1) Herman Melville      2) Charles Dickens");
    printf("\n        3) Mark Twain           4) Nathaniel Hawthorne");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    printf("\n           ----------Second Level---------");
    printf("\n    11) Which Shakespearean play features the character Othello ?");
    printf("\n        1) Macbeth          2) Hamlet");  
    printf("\n        3) Othello          4) Romeo and Juliet");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 3) {
        count++;
    }

    
    printf("\n    12) Who wrote the novel 'Pride and Prejudice' ?");
    printf("\n        1) Jane Austen      2) Charles Dickens");  
    printf("\n        3) Leo Tolstoy      4) Emily Brontë");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 1) {
        count++;
    }

    
    printf("\n    13) Which artist painted 'Starry Night' ?");
    printf("\n        1) Vincent van Gogh    2) Pablo Picasso");  
    printf("\n        3) Claude Monet        4) Leonardo da Vinci");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 1) {
        count++;
    }

    
    printf("\n    14) Who wrote the play 'Romeo and Juliet' ?");
    printf("\n        1) William Shakespeare    2) Tennessee Williams");  
    printf("\n        3) Anton Chekhov          4) Oscar Wilde");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 1) {
        count++;
    }

    
    printf("\n    15) Which Impressionist artist is known for his water lilies paintings ?");
    printf("\n        1) Edgar Degas       2) Édouard Manet");  
    printf("\n        3) Claude Monet      4) Pierre-Auguste Renoir");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 3) {
        count++;
    }

    
    printf("\n    16) In which play by Arthur Miller does the character Willy Loman appear?");
    printf("\n        1) The Crucible       2) Death of a Salesman");  
    printf("\n        3) A View from the Bridge      4) All My Sons");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 2) {
        count++;
    }

    
    printf("\n    17) Who painted 'The Persistence of Memory'?");
    printf("\n        1) Salvador Dalí       2) Frida Kahlo");  
    printf("\n        3) Pablo Picasso       4) Claude Monet");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 1) {
        count++;
    }

    
    printf("\n    18) Which author wrote 'To Kill a Mockingbird'?");
    printf("\n        1) J.K. Rowling      2) Harper Lee");  
    printf("\n        3) Ernest Hemingway  4) F. Scott Fitzgerald");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 2) {
        count++;
    }

    
    printf("\n    19) Who composed 'The Four Seasons'?");
    printf("\n        1) Ludwig van Beethoven      2) Wolfgang Amadeus Mozart");  
    printf("\n        3) Antonio Vivaldi           4) Johann Sebastian Bach");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 3) {
        count++;
    }

    
    printf("\n    20) Which playwright wrote 'The Cherry Orchard'?");
    printf("\n        1) Samuel Beckett        2) Henrik Ibsen");  
    printf("\n        3) Anton Chekhov         4) Eugene O'Neill");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 3) {
        count++;
    }

    printf("\n           ----------Third Level---------");
    printf("\n    21) Which Shakespearean play features the characters Rosencrantz and Guildenstern ?");
    printf("\n       1) Macbeth                2) Hamlet");  
    printf("\n       3) Othello                4) King Lear");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    printf("\n    22) Who wrote the novel 'One Hundred Years of Solitude'?");
    printf("\n       1) Gabriel García Márquez     2) Julio Cortázar");  
    printf("\n       3) Pablo Neruda               4) Jorge Luis Borges");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    printf("\n    23) In Vincent van Gogh's famous painting 'Starry Night', which celestial body is prominently featured?");
    printf("\n       1) Moon                2) Jupiter");  
    printf("\n       3) Comet               4) Venus");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 4) {
        count++;
    }

    printf("\n    24) Who wrote the play 'Death of a Salesman'?");
    printf("\n       1) Tennessee Williams        2) Eugene O'Neill");  
    printf("\n       3) Arthur Miller              4) Samuel Beckett");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    printf("\n    25) What poetic form consists of 14 lines with a specific rhyme scheme, often used by Shakespeare?");
    printf("\n       1) Limerick               2) Sonnet");  
    printf("\n       3) Haiku                  4) Villanelle");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    printf("\n    26) Who painted 'The Scream', a famous expressionist artwork?");
    printf("\n        1) Edvard Munch             2) Pablo Picasso");  
    printf("\n        3) Salvador Dalí            4) Vincent van Gogh");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    printf("\n    27) Which literary work opens with the line, 'It was the best of times, it was the worst of times'?");
    printf("\n       1) David Copperfield         2) Great Expectations");  
    printf("\n       3) A Tale of Two Cities      4) Oliver Twist");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    printf("\n    28) Who composed the music for the ballet 'The Nutcracker'?");
    printf("\n       1) Ludwig van Beethoven     2) Pyotr Ilyich Tchaikovsky");  
    printf("\n       3) Johannes Brahms           4) Igor Stravinsky");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    printf("\n    29) Which Greek epic poem features the hero Odysseus's journey home after the Trojan War?");
    printf("\n        1) The Iliad                2) The Odyssey");  
    printf("\n        3) The Aeneid               4) The Argonautica");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    printf("\n    30) Who wrote the novel 'To Kill a Mockingbird'?");
    printf("\n       1) Harper Lee               2) F. Scott Fitzgerald");  
    printf("\n       3) John Steinbeck           4) Ernest Hemingway");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }
 printf("\nYou scored %d out of 30.\n", count);
} 

int Movies(){

    int count=0,answer;
    printf("\n     -------Welcome to the world of Movies and Tv --------");
    printf("\n Directly enter the option number from 1,2,3 or 4 for answers");

    printf("\n           ----------First Level---------");

    printf("\n    1) Who played the role of Harry Potter in the film series ?\n");
    printf("         1) Daniel Radcliffe     2) Rupert Grint\n");
    printf("         3) Tom Felton           4) Emma Watson\n");
    printf("  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n    2) Which TV show features a group of friends living in New York City ?\n");
    printf("        1) Friends                2) The Big Bang Theory\n");
    printf("        3) How I Met Your Mother  4) Breaking Bad\n");
    printf("  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n    3) Who directed the movie 'Jurassic Park' ?\n");
    printf("         1) Steven Spielberg     2) Martin Scorsese\n");
    printf("         3) James Cameron        4) Quentin Tarantino\n");
    printf("  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n     4) Which actor portrays Iron Man in the Marvel Cinematic Universe ?\n");
    printf("          1) Chris Evans          2) Robert Downey Jr.\n");
    printf("          3) Chris Hemsworth      4) Mark Ruffalo\n");
    printf("  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    
    printf("\n    5) Which TV series features a chemistry teacher turned methamphetamine manufacturer ?\n");
    printf("         1) House of Cards       2) The Walking Dead\n");
    printf("         3) Breaking Bad         4) Dexter\n");
    printf("  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    
    printf("\n    6) Who plays the character of Jack Sparrow in the 'Pirates of the Caribbean' series ?\n");
    printf("         1) Orlando Bloom        2) Johnny Depp\n");
    printf("         3) Geoffrey Rush        4) Keira Knightley\n");
    printf("  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    
    printf("\n    7) What is the name of the animated film about a rat with dreams of becoming a chef ?\n");
    printf("         1) Ratatouille          2) Finding Nemo\n");
    printf("         3) Toy Story            4) Up\n");
    printf("  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n    8) Which film features the famous line, 'I'll be back' ?\n");
    printf("         1) Die Hard             2) Terminator 2: Judgment Day\n");
    printf("         3) Predator             4) Total Recall\n");
    printf("  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    
    printf("\n    9) Who played the character of Lisbeth Salander in the movie 'The Girl with the Dragon Tattoo' ?\n");
    printf("         1) Rooney Mara          2) Scarlett Johansson\n");
    printf("         3) Jennifer Lawrence    4) Emma Stone\n");
    printf("  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n    10) Which TV show is set in the fictional town of Springfield ?\n");
    printf("          1) Family Guy          2) The Simpsons\n");
    printf("          3) South Park          4) Bob's Burgers\n");
    printf("  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    printf("\n           ----------Second Level---------");
    printf("\n    11) Which movie won the Academy Award for Best Picture in 1994 ?");
    printf("\n        1) Forrest Gump                2) Pulp Fiction");
    printf("\n        3) The Shawshank Redemption    4) Schindler's List");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 4) {
        count++;
    }

    
    printf("\n    12) In the TV series 'Breaking Bad', what is the alias used by Walter White ?");
    printf("\n        1) Heisenberg    2) Scarface");
    printf("\n        3) El Chapo      4) Mr. White");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n    13) Who directed the movie 'Inception' ?");
    printf("\n       1) Christopher Nolan    2) Quentin Tarantino");
    printf("\n       3) Martin Scorsese      4) David Fincher");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n    14) Which TV show features characters named Ross, Rachel, Chandler, Monica, Joey, and Phoebe ?");
    printf("\n        1) Friends                  2) The Office");
    printf("\n        3) How I Met Your Mother    4) Seinfeld");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n    15) Which actor played the role of Tony Stark in the Marvel Cinematic Universe ?");
    printf("\n        1) Chris Evans    2) Robert Downey Jr.");
    printf("\n        3) Chris Hemsworth    4) Mark Ruffalo");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    
    printf("\n    16) Who played the character of Michael Corleone in 'The Godfather' trilogy ?");
    printf("\n        1) Robert De Niro    2) Al Pacino");
    printf("\n        3) Marlon Brando     4) James Caan");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    
    printf("\n    17) Which animated movie features a clownfish searching for his son ?");
    printf("\n        1) Finding Nemo    2) Toy Story");
    printf("\n        3) Shrek           4) The Lion King");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n    18) In 'Stranger Things', what is Eleven's real name ?");
    printf("\n       1) Max     2) Nancy");
    printf("\n       3) Jane    4) Erica");
    printf("\nAnswer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    
    printf("\n    19) Which movie features a character named Tyler Durden, played by Brad Pitt ?");
    printf("\n        1) Fight Club         2) The Departed");
    printf("\n        3) American Psycho    4) The Usual Suspects");
    printf("\nAnswer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n    20) Which TV series is based on the book series 'A Song of Ice and Fire' by George R.R. Martin ?");
    printf("\n        1) The Walking Dead    2) Westworld");
    printf("\n        3) Game of Thrones    4) The Witcher");
    printf("\nAnswer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }
    
    printf("\n           ----------Third Level---------");
    printf("\n    21) Which movie did Stanley Kubrick famously say was the one film he wished he had made?\n");
    printf("\n        1) Apocalypse Now     2) The Godfather");
    printf("\n        3) Blade Runner       4) Schindler's List");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    
    printf("\n    22) In the TV show 'Breaking Bad', what is the chemical compound Walter White uses to produce blue meth?\n");
    printf("\n        1) Methylamine        2) Hydrochloric Acid");
    printf("\n        3) Phosphine          4) Pseudoephedrine");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n    23) Which movie won the Academy Award for Best Picture in 1999?\n");
    printf("\n        1) Saving Private Ryan     2) American Beauty");
    printf("\n        3) The Green Mile           4) The Sixth Sense");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    
    printf("\n    24) In 'The Shawshank Redemption', what is the name of the poster covering the tunnel?\n");
    printf("\n        1) Rita Hayworth       2) Marilyn Monroe");
    printf("\n        3) Audrey Hepburn      4) Grace Kelly");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n    25) Who directed the movie '2001: A Space Odyssey'?\n");
    printf("\n        1) George Lucas        2) Steven Spielberg");
    printf("\n        3) Stanley Kubrick     4) Ridley Scott");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    
    printf("\n    26) In the TV series 'The Sopranos', what is Tony Soprano's profession?\n");
    printf("\n        1) Lawyer              2) Doctor");
    printf("\n        3) Mob Boss            4) Police Officer");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    
    printf("\n    27) Which actor played the role of Mark Zuckerberg in 'The Social Network'?\n");
    printf("\n        1) Jesse Eisenberg     2) Michael Cera");
    printf("\n        3) Andrew Garfield      4) Jonah Hill");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n    28) What is the name of the planet in 'Interstellar' where time dilation causes significant differences in aging?\n");
    printf("\n        1) Endurance           2) Miller's Planet");
    printf("\n        3) Mann's Planet       4) Gargantua");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    
    printf("\n    29) Which film won the first Academy Award for Best Animated Feature in 2002?\n");
    printf("\n        1) Finding Nemo        2) Shrek");
    printf("\n        3) Monsters, Inc.      4) Spirited Away");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 4) {
        count++;
    }

    0
    printf("\n    30) Who played the character of Lester Burnham in 'American Beauty'?\n");
    printf("\n        1) Leonardo DiCaprio   2) Kevin Spacey");
    printf("\n        3) Tom Hanks           4) Brad Pitt");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    printf("\n  You scored %d out of 30.\n", count);
}

int Music()

{
    int count=0,answer;
    printf("\n     -------Welcome to the world of Music--------");
    printf("\n Directly enter the option number from 1,2,3 or 4 for answers");

    printf("\n           ----------First Level---------");

    
    printf("\n    1) Which instrument is known as the 'king of instruments'?");
    printf("\n       1) Piano        2) Violin");  
    printf("\n       3) Guitar       4) Organ");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if(answer == 4) {
        count++;
    }

    
    printf("\n    2) What do the letters 'MP3' stand for in digital audio?");
    printf("\n       1) Musical Performance 3       2) Moving Picture 3");  
    printf("\n       3) MPEG-3                     4) Music Player 3");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if(answer == 3) {
        count++;
    }

    
    printf("\n    3) Which genre of music is characterized by a steady, repetitive beat?");
    printf("\n       1) Jazz        2) Classical");  
    printf("\n       3) Hip Hop     4) Opera");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if(answer == 3) {
        count++;
    }

    
    printf("\n    4) Who was known as the 'King of Pop'?");
    printf("\n       1) Michael Jackson       2) Elvis Presley");  
    printf("\n       3) Madonna                4) Bob Marley");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if(answer == 1) {
        count++;
    }

    
    printf("\n    5) What is the highest male singing voice?");
    printf("\n       1) Alto       2) Tenor");  
    printf("\n       3) Baritone   4) Soprano");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if(answer == 2) {
        count++;
    }

    
    printf("\n    6) Which Beatles album is known for its cover featuring a zebra crossing?");
    printf("\n       1) Abbey Road        2) Sgt. Pepper's Lonely Hearts Club Band");  
    printf("\n       3) Let It Be          4) Rubber Soul");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if(answer == 1) {
        count++;
    }

    
    printf("\n    7) Who was the lead guitarist of the rock band Queen?");
    printf("\n       1) Brian May        2) Jimmy Page");  
    printf("\n       3) Eric Clapton      4) Angus Young");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if(answer == 1) {
        count++;
    }

    
    printf("\n    8) Which country is famous for flamenco music?");
    printf("\n       1) Italy         2) Spain");  
    printf("\n       3) Brazil        4) India");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if(answer == 2) {
        count++;
    }

    
    printf("\n    9) What instrument did Louis Armstrong play?");
    printf("\n       1) Trumpet         2) Saxophone");  
    printf("\n       3) Piano            4) Trombone");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if(answer == 1) {
        count++;
    }

    
    printf("\n    10) Who wrote the opera 'The Marriage of Figaro'?");
    printf("\n       1) Giuseppe Verdi         2) Wolfgang Amadeus Mozart");  
    printf("\n       3) Richard Wagner         4) Gioachino Rossini");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if(answer == 2) {
        count++;
    }

    printf("\n           ----------Second Level---------");
    
    printf("\n    11) Which classical composer is known for 'The Four Seasons'?");
    printf("\n       1) Beethoven      2) Mozart");  
    printf("\n       3) Bach           4) Vivaldi");
    printf("\nAnswer=");
    scanf("%d", &answer); 
    if (answer == 4) {
        count++;
    }

    
    printf("\n    12) What is the name of the lead singer of the band Queen?");
    printf("\n       1) Freddie Mercury      2) John Lennon");  
    printf("\n       3) David Bowie           4) Mick Jagger");
    printf("\nAnswer=");
    scanf("%d", &answer); 
    if (answer == 1) {
        count++;
    }

    
    printf("\n    13) Which instrument does Yo-Yo Ma play?");
    printf("\n       1) Piano      2) Violin");  
    printf("\n       3) Cello      4) Trumpet");
    printf("\nAnswer=");
    scanf("%d", &answer); 
    if (answer == 3) {
        count++;
    }

    
    printf("\n    14) Who wrote the musical 'Les Misérables'?");
    printf("\n       1) Andrew Lloyd Webber      2) Stephen Sondheim");  
    printf("\n       3) Claude-Michel Schönberg   4) Lin-Manuel Miranda");
    printf("\nAnswer=");
    scanf("%d", &answer); 
    if (answer == 3) {
        count++;
    }

    
    printf("\n    15) Which rock band released the album 'The Dark Side of the Moon'?");
    printf("\n       1) The Beatles      2) Pink Floyd");  
    printf("\n       3) Led Zeppelin      4) The Rolling Stones");
    printf("\nAnswer=");
    scanf("%d", &answer); 
    if (answer == 2) {
        count++;
    }

    
    printf("\n    16) Who composed the opera 'The Magic Flute'?");
    printf("\n       1) Wagner      2) Verdi");  
    printf("\n       3) Puccini      4) Mozart");
    printf("\nAnswer=");
    scanf("%d", &answer); 
    if (answer == 4) {
        count++;
    }

    
    printf("\n    17) What is the name of Beyoncé's debut solo album?");
    printf("\n       1) Lemonade      2) Dangerously in Love");  
    printf("\n       3) B'Day         4) Sasha Fierce");
    printf("\nAnswer=");
    scanf("%d", &answer); 
    if (answer == 2) {
        count++;
    }

    
    printf("\n    18) Which jazz musician was known as 'Satchmo'?");
    printf("\n       1) Louis Armstrong      2) Miles Davis");  
    printf("\n       3) John Coltrane         4) Duke Ellington");
    printf("\nAnswer=");
    scanf("%d", &answer); 
    if (answer == 1) {
        count++;
    }

    
    printf("\n    19) Who composed the ballet 'Swan Lake'?");
    printf("\n       1) Tchaikovsky      2) Stravinsky");  
    printf("\n       3) Chopin           4) Debussy");
    printf("\nAnswer=");
    scanf("%d", &answer); 
    if (answer == 1) {
        count++;
    }

    
    printf("\n    20) Which iconic musician was known for playing a 'Purple Rain' guitar?");
    printf("\n       1) Michael Jackson      2) Prince");  
    printf("\n       3) Jimi Hendrix          4) David Bowie");
    printf("\nAnswer=");
    scanf("%d", &answer); 
    if (answer == 2) {
        count++;
    }

    printf("\n           ----------Third Level---------");

    printf("\n    21) Who composed 'The Four Seasons'?");
    printf("\n       1) Ludwig van Beethoven      2) Johann Sebastian Bach");
    printf("\n       3) Wolfgang Amadeus Mozart   4) Antonio Vivaldi");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 4) {
        count++;
    }

    printf("\n    22) Which composer wrote 'Carmina Burana'?");
    printf("\n        1) Maurice Ravel      2) Richard Strauss");
    printf("\n        3) Carl Orff          4) Igor Stravinsky");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    printf("\n    23) Which instrument did Miles Davis play?");
    printf("\n        1) Piano          2) Saxophone");
    printf("\n        3) Trumpet        4) Violin");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    printf("\n    24) What is the term for a group of eight musicians?");
    printf("\n        1) Octet          2) Nonet");
    printf("\n        3) Sextet         4) Octave");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    printf("\n    25) Who composed 'The Rite of Spring'?");
    printf("\n        1) Igor Stravinsky      2) Claude Debussy");
    printf("\n        3) Sergei Prokofiev      4) Gustav Mahler");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    printf("\n    26) Which of these is not a woodwind instrument?");
    printf("\n        1) Flute          2) Oboe");
    printf("\n        3) Violin         4) Clarinet");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    printf("\n     27) Who is considered the 'King of Ragtime'?");
    printf("\n         1) Scott Joplin         2) Jelly Roll Morton");
    printf("\n         3) Duke Ellington       4) Louis Armstrong");
    printf("\n   Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    printf("\n     28) What is the tempo marking for 'very fast'?");
    printf("\n         1) Andante         2) Allegro");
    printf("\n         3) Presto          4) Adagio");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    printf("\n    29) In which opera would you find the 'Habanera'?");
    printf("\n        1) La Traviata         2) Carmen");
    printf("\n        3) The Magic Flute     4) The Barber of Seville");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    printf("\n    30) Who wrote the famous choral work 'Messiah'?");
    printf("\n        1) Handel           2) Bach");
    printf("\n        3) Mozart           4) Vivaldi");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    printf("\n  You scored %d out of 30.\n", count);

}

int Sports(){
    int count=0,answer;
    printf("\n     -------Welcome to the world of Sports--------");
    printf("\n Directly enter the option number from 1,2,3 or 4 for answers");

    printf("\n           ----------First Level---------");
    
    printf("\n   1) Which sport is played with a shuttlecock?\n");
    printf("       1) Badminton    2) Tennis\n");
    printf("       3) Basketball   4) Golf\n");
    printf("  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n   2) Who is known as 'The King of Clay' in tennis?\n");
    printf("       1) Roger Federer    2) Novak Djokovic\n");
    printf("       3) Rafael Nadal     4) Serena Williams\n");
    printf("  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    
    printf("\n   3) How many players are there in a baseball team?\n");
    printf("       1) 9    2) 11\n");
    printf("       3) 7    4) 6\n");
    printf("  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n   4) Which country won the FIFA World Cup 2018?\n");
    printf("       1) Brazil    2) Germany\n");
    printf("       3) France    4) Argentina\n");
    printf("  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    
    printf("\n   5) How many points is a touchdown worth in American football?\n");
    printf("       1) 1    2) 3\n");
    printf("       3) 6    4) 7\n");
    printf("  Answer=");
    scanf("%d", &answer);
    if (answer == 4) {
        count++;
    }

    
    printf("\n   6) Who is the all-time leading scorer in NBA history?\n");
    printf("       1) Kobe Bryant    2) LeBron James\n");
    printf("       3) Kareem Abdul-Jabbar    4) Michael Jordan\n");
    printf("  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    
    printf("\n   7) In which sport would you perform a slam dunk?\n");
    printf("       1) Basketball    2) Volleyball\n");
    printf("       3) Soccer         4) Tennis\n");
    printf("  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n   8) Which city hosted the 2016 Summer Olympics?\n");
    printf("       1) Rio de Janeiro    2) London\n");
    printf("       3) Beijing            4) Sydney\n");
    printf("  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n   9) What is the diameter of a standard basketball hoop in inches?\n");
    printf("       1) 15    2) 16\n");
    printf("       3) 17    4) 18\n");
    printf("  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    
    printf("\n   10). Which country won the ICC Cricket World Cup 2019?\n");
    printf("        1) Australia    2) England\n");
    printf("        3) India        4) South Africa\n");
    printf("  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    printf("\n           ----------Second Level---------");

    printf("\n   11)Which country won the FIFA World Cup in 2014?");
    printf("\n     1) Brazil       2) Argentina");
    printf("\n     3) Germany      4) Spain");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }


    printf("\n   12)Which athlete has won the most Olympic gold medals?");
    printf("\n     1) Michael Phelps       2) Usain Bolt");
    printf("\n     3) Serena Williams      4) Simone Biles");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }


    printf("\n   13)Which tennis player has won the most Grand Slam titles?");
    printf("\n     1) Roger Federer        2) Rafael Nadal");
    printf("\n     3) Novak Djokovic       4) Pete Sampras");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }


    printf("\n   14)In which city were the 2016 Summer Olympics held?");
    printf("\n     1) London       2) Rio de Janeiro");
    printf("\n     3) Tokyo        4) Beijing");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }


    printf("\n   15)Which NBA player holds the record for the most points scored in a single game?");
    printf("\n     1) Michael Jordan       2) Wilt Chamberlain");
    printf("\n     3) Kobe Bryant           4) LeBron James");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }


    printf("\n   16)Who is the all-time leading goal scorer in men's international soccer?");
    printf("\n     1) Lionel Messi         2) Cristiano Ronaldo");
    printf("\n     3) Pele                  4) Ali Daei");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 4) {
        count++;
    }


    printf("\n   17)Which golfer has won the most Masters Tournaments?");
    printf("\n     1) Jack Nicklaus        2) Tiger Woods");
    printf("\n     3) Arnold Palmer        4) Phil Mickelson");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }


    printf("\n   18)Which team has won the most Super Bowl titles?");
    printf("\n     1) New England Patriots     2) Dallas Cowboys");
    printf("\n     3) San Francisco 49ers       4) Pittsburgh Steelers");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 4) {
        count++;
    }


    printf("\n   19)Who was the first African-American to play in Major League Baseball?");
    printf("\n     1) Satchel Paige         2) Jackie Robinson");
    printf("\n     3) Willie Mays           4) Hank Aaron");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    
    printf("\n   20)Which country has won the most medals in the history of the Summer Olympics?");
    printf("\n     1) United States        2) Soviet Union");
    printf("\n     3) China                4) Great Britain");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    printf("\n           ----------Third Level---------");
    printf("\n    21) Who was the first tennis player to achieve a Career Grand Slam in the Open Era?");
    printf("\n      1) Rafael Nadal     2) Roger Federer");  
    printf("\n      3) Novak Djokovic   4) Rod Laver");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    printf("\n    22) In which year did the 'Miracle on Ice' occur?");
    printf("\n      1) 1976     2) 1980");  
    printf("\n      3) 1984     4) 1992");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    printf("\n    23) Who was the first athlete to run the mile under four minutes?");
    printf("\n      1) Sebastian Coe     2) Steve Cram");  
    printf("\n      3) Roger Bannister    4) Jim Ryun");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    printf("\n    24) Which country has won the most FIFA World Cup titles?");
    printf("\n      1) Brazil     2) Germany");  
    printf("\n      3) Argentina   4) Italy");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    printf("\n    25) Who holds the record for the most Olympic gold medals in athletics?");
    printf("\n      1) Usain Bolt     2) Michael Johnson");  
    printf("\n      3) Carl Lewis   4) Jesse Owens");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    printf("\n    26) Which boxer was known as 'The Greatest'?");
    printf("\n      1) Mike Tyson     2) Evander Holyfield");  
    printf("\n      3) Muhammad Ali   4) Floyd Mayweather");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    printf("\n    27) Which team won the first-ever Super Bowl?");
    printf("\n      1) Green Bay Packers     2) Dallas Cowboys");  
    printf("\n      3) Kansas City Chiefs   4) New York Jets");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    printf("\n    28) Who was the youngest Formula One World Champion?");
    printf("\n      1) Lewis Hamilton     2) Sebastian Vettel");  
    printf("\n      3) Ayrton Senna   4) Michael Schumacher");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    printf("\n    29) In which city were the first modern Olympic Games held in 1896?");
    printf("\n      1) Paris     2) Rome");  
    printf("\n      3) London   4) Athens");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 4) {
        count++;
    }

    printf("\n    30) Who is the all-time leading scorer in NBA history?");
    printf("\n      1) Kobe Bryant     2) Kareem Abdul-Jabbar");  
    printf("\n      3) LeBron James   4) Michael Jordan");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    printf("\n  You scored %d out of 30.\n", count);
}

int Geography(){
    int count=0,answer;
    printf("\n     -------Welcome to the world of Sports--------");
    printf("\n Directly enter the option number from 1,2,3 or 4 for answers");

    printf("\n           ----------First Level---------");

    
    printf("\n    1) What is the capital of France?");
    printf("\n       1) Paris      2) Berlin");  
    printf("\n       3) Rome       4) Madrid");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 1) {
        count++;
    }

    
    printf("\n    2) Which continent is known as the 'Land Down Under'?");
    printf("\n       1) Europe     2) Asia");  
    printf("\n       3) Australia  4) Africa");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 3) {
        count++;
    }

    
    printf("\n    3) What is the longest river in the world?");
    printf("\n       1) Amazon     2) Nile");  
    printf("\n       3) Mississippi 4) Yangtze");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 2) {
        count++;
    }

    
    printf("\n    4) Which country is famous for the ancient pyramids?");
    printf("\n       1) Greece     2) China");  
    printf("\n       3) Egypt      4) India");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 3) {
        count++;
    }

    
    printf("\n    5) Where is Mount Everest located?");
    printf("\n       1) Nepal      2) India");  
    printf("\n       3) China      4) Bhutan");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 1) {
        count++;
    }

    
    printf("\n    6) Which ocean is the largest?");
    printf("\n       1) Pacific    2) Atlantic");  
    printf("\n       3) Indian     4) Arctic");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 1) {
        count++;
    }

    
    printf("\n    7) What is the capital city of Japan?");
    printf("\n       1) Tokyo      2) Seoul");  
    printf("\n       3) Beijing    4) Bangkok");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 1) {
        count++;
    }

    
    printf("\n    8) Which country is known as the 'Land of Kangaroos'?");
    printf("\n       1) Brazil     2) Australia");  
    printf("\n       3) Canada     4) South Africa");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 2) {
        count++;
    }

    
    printf("\n    9) What is the largest desert in the world?");
    printf("\n       1) Sahara     2) Gobi");  
    printf("\n       3) Kalahari   4) Atacama");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 1) {
        count++;
    }

    
    printf("\n    10) Which country is known as the 'Land of the Rising Sun'?");
    printf("\n       1) China      2) India");  
    printf("\n       3) Japan      4) Vietnam");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 3) {
        count++;
    }

    printf("\n           ----------Second Level---------");

    
    printf("\n    11)Which is the longest river in the world?");
    printf("\n       1) Nile       2) Amazon");
    printf("\n       3) Yangtze    4) Mississippi");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    
    printf("\n    12)What is the capital city of Australia?");
    printf("\n      1) Sydney     2) Melbourne");
    printf("\n      3) Canberra   4) Brisbane");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    
    printf("\n    13)Mount Everest is located in which mountain range?");
    printf("\n       1) Andes      2) Himalayas");
    printf("\n       3) Rockies    4) Alps");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    
    printf("\n    14)Which desert is the largest in the world?");
    printf("\n       1) Sahara     2) Gobi");
    printf("\n       3) Arabian    4) Kalahari");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n    15)What is the capital city of Japan?");
    printf("\n       1) Kyoto      2) Osaka");
    printf("\n       3) Tokyo      4) Hiroshima");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    
    printf("\n    16)The Great Barrier Reef is located off the coast of which country?");
    printf("\n       1) Australia  2) Brazil");
    printf("\n       3) India      4) South Africa");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n    17)Which continent is the least populated?");
    printf("\n       1) Africa     2) Asia");
    printf("\n       3) Europe     4) Antarctica");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 4) {
        count++;
    }

    
    printf("\n    18)What is the largest ocean in the world?");
    printf("\n       1) Atlantic   2) Indian");
    printf("\n       3) Arctic     4) Pacific");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 4) {
        count++;
    }

    
    printf("\n    19)Which country is known as the 'Land of the Rising Sun'?");
    printf("\n       1) China      2) Italy");
    printf("\n       3) Japan      4) India");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    printf("\n   20) What is the largest country by land area?");
    printf("\n       1) Russia    2) Canada");
    printf("\n       3) China     4) United States");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    printf("\n           ----------Third Level---------");
  
    
    printf("\n   21) Which is the world's longest river?");
    printf("\n       1) Amazon River        2) Nile River");
    printf("\n       3) Yangtze River       4) Mississippi River");
    printf("\n  Answer = ");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    
    printf("\n   22) What is the highest mountain peak in the world?");
    printf("\n       1) Mount Everest      2) K2");
    printf("\n       3) Kangchenjunga      4) Lhotse");
    printf("\n  Answer = ");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n   23) Which country is the largest by land area?");
    printf("\n       1) Russia             2) Canada");
    printf("\n       3) China              4) United States");
    printf("\n  Answer = ");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n   24) Which city is located at the highest elevation?");
    printf("\n       1) La Paz             2) Lhasa");
    printf("\n       3) Kathmandu          4) Quito");
    printf("\n  Answer = ");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n   25) Which ocean is the largest?");
    printf("\n       1) Pacific Ocean      2) Atlantic Ocean");
    printf("\n       3) Indian Ocean        4) Southern Ocean");
    printf("\n  Answer = ");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n   26) What is the capital of Australia?");
    printf("\n       1) Sydney             2) Canberra");
    printf("\n       3) Melbourne          4) Brisbane");
    printf("\n  Answer = ");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    
    printf("\n   27) Which desert is the largest hot desert in the world?");
    printf("\n       1) Sahara Desert      2) Arabian Desert");
    printf("\n       3) Kalahari Desert    4) Gobi Desert");
    printf("\n  Answer = ");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n   28) What is the capital city of Brazil?");
    printf("\n       1) Rio de Janeiro     2) Brasília");
    printf("\n       3) São Paulo          4) Salvador");
    printf("\n  Answer = ");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    
    printf("\n   29) Which country is known as the 'Land of the Rising Sun'?");
    printf("\n       1) China              2) Japan");
    printf("\n       3) South Korea        4) Thailand");
    printf("\n  Answer = ");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    
    printf("\n   30)  Which strait separates Asia from North America?");
    printf("\n        1) Bering Strait      2) Strait of Gibraltar");
    printf("\n        3) Strait of Hormuz   4) Strait of Malacca");
    printf("\n  Answer = ");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    printf("\n  You scored %d out of 30.\n", count);

}

int Technology(){

    int count=0,answer;
    printf("\n     -------Welcome to the world of Sports--------");
    printf("\n Directly enter the option number from 1,2,3 or 4 for answers");

    printf("\n           ----------First Level---------");

    
    printf("\n   1)  What is the primary function of a CPU?");
    printf("\n       1) Store data    2) Process data");
    printf("\n       3) Display data  4) Print data");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    
    printf("\n   2)  Which device is used to connect multiple computers together within a local area?");
    printf("\n       1) Modem    2) Router");
    printf("\n       3) Switch   4) Firewall");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    
    printf("\n   3)  What does 'HTML' stand for?");
    printf("\n       1) Hyper Transfer Markup Language");
    printf("\n       2) Hyper Text Modeling Language");
    printf("\n  3) Hyper Text Markup Language");
    printf("\n4) High Tech Machine Learning");
    printf("\nAnswer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    
    printf("\n   4)  Which programming language is used for building Android apps?");
    printf("\n       1) Java    2) C++");
    printf("\n       3) Python  4) Swift");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n   5)  What does 'LAN' stand for?");
    printf("\n       1) Large Area Network    2) Local Area Network");
    printf("\n       3) Limited Access Network  4) Long Access Node");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    
    printf("\n   6)  Which of these is not a type of computer memory?");
    printf("\n       1) RAM    2) ROM");
    printf("\n       3) CPU    4) Cache");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    
    printf("\n   7)  What is the purpose of an operating system?");
    printf("\n       1) Manage hardware resources");
    printf("\n       2) Run software applications");
    printf("\n  3) Provide user interface");
    printf("\n4) All of the above");
    printf("\nAnswer=");
    scanf("%d", &answer);
    if (answer == 4) {
        count++;
    }

    
    printf("\n   8)  Which of the following is a cloud computing service?");
    printf("\n       1) Microsoft Word    2) Google Drive");
    printf("\n       3) Adobe Photoshop   4) VLC Media Player");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    
    printf("\n   9)  What is the basic unit of digital information?");
    printf("\n       1) Bit    2) Byte");
    printf("\n       3) Pixel  4) Megabyte");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n   10) Which company developed the Windows operating system?");
    printf("\n       1) Apple    2) Microsoft");
    printf("\n       3) Google   4) IBM");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    printf("\n           ----------Second Level---------");
    
    
    printf("\n    11) What does CPU stand for?");
    printf("\n         1) Central Processing Unit     2) Computer Processing Unit");
    printf("\n         3) Core Processing Unit         4) Central Program Utility");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n    12) Which programming language is commonly used for developing Android apps?");
    printf("\n         1) Swift                       2) Java");
    printf("\n         3) C++                         4) Python");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    
    printf("\n    13) What does HTML stand for?");
    printf("\n         1) Hyperlink Text Markup Language     2) Hypertext Markup Language");
    printf("\n         3) Hyper Tool Markup Language         4) Home Tool Markup Language");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    
    printf("\n    14) Which company developed the Python programming language?");
    printf("\n         1) Google                      2) Apple");
    printf("\n         3) Microsoft                   4) Dropbox");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    
    printf("\n    15) What does GPU stand for?");
    printf("\n         1) Graphics Processing Unit    2) Graphical Performance Utility");
    printf("\n         3) General Processing Unit     4) Generalized Performance Unit");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n    16) What is the full form of RAM?");
    printf("\n         1) Read Access Memory          2) Random Access Memory");
    printf("\n         3) Rapid Access Memory         4) Remote Access Memory");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    
    printf("\n    17) Which protocol is used for secure communication over the Internet?");
    printf("\n         1) HTTP                        2) SMTP");
    printf("\n         3) FTP                         4) HTTPS");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 4) {
        count++;
    }

    
    printf("\n    18) Which of the following is NOT a web browser?");
    printf("\n         1) Chrome                      2) Firefox");
    printf("\n         3) Java                        4) Safari");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    
    printf("\n    19) What technology is used to connect wireless devices such as headphones to smartphones?");
    printf("\n         1) NFC                         2) Bluetooth");
    printf("\n         3) Infrared                    4) Wi-Fi");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    
    printf("\n    20) Which programming language is known for its use in data analysis and scientific computing?");
    printf("\n         1) JavaScript                  2) Ruby");
    printf("\n         3) MATLAB                      4) PHP");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    printf("\n           ----------Third Level---------");

    
    printf("\n   21) Which encryption algorithm is considered the most secure?");
    printf("\n      1) AES (Advanced Encryption Standard)      2) DES (Data Encryption Standard)");  
    printf("\n      3) RSA (Rivest-Shamir-Adleman)             4) Blowfish");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if(answer == 1) {
        count++;
    }

    
    printf("\n   22) What does the acronym 'IoT' stand for?");
    printf("\n      1) Internet of Things                    2) Input/Output Technology");  
    printf("\n      3) Integrated Operational Technology     4) Intelligent Object Tracking");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if(answer == 1) {
        count++;
    }

    
    printf("\n   23) Which programming language is often used for artificial intelligence applications?");
    printf("\n      1) Java      2) Python");  
    printf("\n      3) C++       4) Ruby");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if(answer == 2) {
        count++;
    }

    
    printf("\n   24) What is the maximum data transfer rate of USB 3.0?");
    printf("\n      1) 480 Mbps      2) 5 Gbps");  
    printf("\n      3) 10 Gbps       4) 1 Gbps");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if(answer == 3) {
        count++;
    }

    
    printf("\n   25) Which of the following is NOT a cloud computing deployment model?");
    printf("\n      1) Public Cloud      2) Private Cloud");  
    printf("\n      3) Hybrid Cloud      4) Encrypted Cloud");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if(answer == 4) {
        count++;
    }

    
    printf("\n   26) What is the smallest unit of data in a quantum computer?");
    printf("\n      1) Qubit      2) Bit");  
    printf("\n      3) Byte       4) Quantum Byte");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if(answer == 1) {
        count++;
    }

    
    printf("\n   27) Which company developed the first commercially available smartphone?");
    printf("\n      1) Apple        2) IBM");  
    printf("\n      3) Motorola     4) Nokia");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if(answer == 3) {
        count++;
    }

    
    printf("\n   28) What is the main purpose of a VPN (Virtual Private Network)?");
    printf("\n      1) Securely encrypt emails              2) Bypass internet censorship");  
    printf("\n      3) Connect remote networks securely     4) Speed up internet connection");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if(answer == 3) {
        count++;
    }

    
    printf("\n   29) Which protocol is commonly used for secure communication over the internet?");
    printf("\n      1) HTTP       2) FTP");  
    printf("\n      3) TCP/IP     4) HTTPS");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if(answer == 4) {
        count++;
    }

    0
    printf("\n    30) What does RAID stand for in data storage?");
    printf("\n      1) Redundant Array of Independent Disks         2) Rapid Access of Important Data");  
    printf("\n      3) Randomized Allocation of Integrated Data     4) Real-time Asset and Information Database");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if(answer == 1) {
        count++;
    }

    printf("\n  You scored %d out of 30.\n", count);

}

int Language(){
    int count=0,answer;
    printf("\n     -------Welcome to the world of Sports--------");
    printf("\n Directly enter the option number from 1,2,3 or 4 for answers");

    printf("\n           ----------First Level---------");


printf("\n      1) What is the term for a word that sounds like the noise it represents?");
printf("\n         1) Onomatopoeia     2) Oxymoron");  
printf("\n         3) Hyperbole         4) Metaphor");
printf("\n  Answer=");
scanf("%d",&answer); 
if(answer==1){
    count++;
}


printf("\n      2) Which of these is a synonym for 'happy'?");
printf("\n         1) Gloomy           2) Ecstatic");  
printf("\n         3) Grumpy           4) Sad");
printf("\n  Answer=");
scanf("%d",&answer); 
if(answer==2){
    count++;
}


printf("\n      3) What do we call words that are spelled the same but have different meanings?");
printf("\n         1) Synonyms         2) Homonyms");  
printf("\n         3) Antonyms         4) Anagrams");
printf("\n  Answer=");
scanf("%d",&answer); 
if(answer==2){
    count++;
}


printf("\n      4) Which of these is NOT a vowel?");
printf("\n         1) A                2) E");  
printf("\n         3) D                4) I");
printf("\n  Answer=");
scanf("%d",&answer); 
if(answer==3){
    count++;
}


printf("\n      5) What is the plural form of 'child'?");
printf("\n         1) Childs           2) Childes");  
printf("\n         3) Children         4) Childs'");
printf("\n  Answer=");
scanf("%d",&answer); 
if(answer==3){
    count++;
}


printf("\n      6) Which word means the opposite of 'begin'?");
printf("\n         1) Start            2) Initiate");  
printf("\n         3) Conclude         4) Commence");
printf("\n  Answer=");
scanf("%d",&answer); 
if(answer==3){
    count++;
}


printf("\n      7) What is the term for a group of wolves?");
printf("\n         1) Herd             2) Pack");  
printf("\n         3) Flock            4) Pod");
printf("\n  Answer=");
scanf("%d",&answer); 
if(answer==2){
    count++;
}


printf("\n      8) Which word is a synonym for 'angry'?");
printf("\n         1) Joyful           2) Content");  
printf("\n         3) Furious          4) Peaceful");
printf("\n  Answer=");
scanf("%d",&answer); 
if(answer==3){
    count++;
}


printf("\n      9) What is a word that means 'the study of insects'?");
printf("\n         1) Biology          2) Botany");  
printf("\n         3) Zoology          4) Entomology");
printf("\n  Answer=");
scanf("%d",&answer); 
if(answer==4){
    count++;
}


printf("\n      10) Which of these words is a conjunction?");
printf("\n         1) Car              2) And");  
printf("\n         3) Fast             4) Green");
printf("\n  Answer=");
scanf("%d",&answer); 
if(answer==2){
    count++;
}

    printf("\n           ----------Second Level---------");
    
    printf("\n   11) Which term refers to a word or phrase that reads the same backward as forward?");
    printf("\n      1) Palindrome     2) Oxymoron");  
    printf("\n      3) Anagram        4) Onomatopoeia");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 1) {
        count++;
    }

    
    printf("\n  12) What is the study of the origin and history of words?");
    printf("\n      1) Etymology      2) Syntax");  
    printf("\n      3) Phonetics      4) Morphology");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 1) {
        count++;
    }

    
    printf("\n   13) Which figure of speech involves the use of exaggeration for emphasis?");
    printf("\n      1) Irony          2) Metaphor");  
    printf("\n      3) Hyperbole      4) Simile");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 3) {
        count++;
    }

    
    printf("\n   14) What is the term for a word that is spelled similarly to another but differs in meaning?");
    printf("\n      1) Homonym        2) Synonym");  
    printf("\n      3) Antonym        4) Homophone");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 4) {
        count++;
    }

    
    printf("\n   15) Which word means the use of several conjunctions in close succession?");
    printf("\n      1) Polysyndeton   2) Asyndeton");  
    printf("\n      3) Anaphora       4) Epistrophe");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 1) {
        count++;
    }

    
    printf("\n   16) What is the term for a word that sounds like the noise it represents?");
    printf("\n      1) Metaphor       2) Simile");  
    printf("\n      3) Onomatopoeia   4) Oxymoron");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 3) {
        count++;
    }

    
    printf("\n   17) Which literary device involves a part representing the whole or vice versa?");
    printf("\n      1) Irony          2) Synecdoche");  
    printf("\n      3) Alliteration   4) Euphemism");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 2) {
        count++;
    }

    
    printf("\n   18) What does the term 'vernacular' refer to?");
    printf("\n      1) Slang          2) Standard language");  
    printf("\n      3) Dialect        4) Jargon");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 3) {
        count++;
    }

    
    printf("\n   19) Which term describes the substitution of a mild or less negative word or phrase for a harsh or blunt one?");
    printf("\n      1) Metaphor       2) Personification");  
    printf("\n      3) Euphemism      4) Idiom");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 3) {
        count++;
    }

    0
    printf("\n   20) What is the term for a word or phrase that contradicts itself?");
    printf("\n      1) Oxymoron       2) Paradox");  
    printf("\n      3) Hyperbole      4) Irony");
    printf("\n  Answer=");
    scanf("%d", &answer); 
    if (answer == 1) {
        count++;
    }

    printf("\n           ----------Third Level---------");

    
    printf("\n      21) What is the term for a word or phrase that reads the same forwards and backwards?");
    printf("\n         1) Palindrome      2) Oxymoron");
    printf("\n         3) Anagram         4) Simile");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n      22) Which of these literary devices involves the use of contradictory terms for effect?");
    printf("\n         1) Euphemism       2) Irony");
    printf("\n         3) Metaphor        4) Paradox");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 4) {
        count++;
    }

    
    printf("\n      23) What is the term for a word or phrase that is substituted for another to avoid being too direct or offensive?");
    printf("\n         1) Homonym         2) Synecdoche");
    printf("\n         3) Euphemism       4) Epiphany");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    
    printf("\n      24) Which word refers to the excessive use of words or overly complex language?");
    printf("\n         1) Epistolary      2) Loquacious");
    printf("\n         3) Elocution       4) Sesquipedalian");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 4) {
        count++;
    }

    
    printf("\n      25) What is the term for a word or phrase that is formed by rearranging the letters of another word or phrase?");
    printf("\n         1) Oxymoron        2) Palindrome");
    printf("\n         3) Anagram         4) Allegory");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 3) {
        count++;
    }

    
    printf("\n      26) Which of these terms refers to a figure of speech where a part is used to represent the whole?");
    printf("\n         1) Synecdoche      2) Metonymy");
    printf("\n         3) Hyperbole       4) Paradox");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n      27) What is the term for a word that sounds like the noise or action it describes?");
    printf("\n         1) Onomatopoeia    2) Portmanteau");
    printf("\n         3) Soliloquy       4) Simile");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 1) {
        count++;
    }

    
    printf("\n      28) Which of these literary devices involves an exaggerated statement or claim not meant to be taken literally?");
    printf("\n         1) Understatement   2) Hyperbole");
    printf("\n         3) Oxymoron        4) Alliteration");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    
    printf("\n      29) What term refers to a word or phrase that suggests more than one meaning?");
    printf("\n         1) Homophone       2) Polysemy");
    printf("\n         3) Parody          4) Onomatopoeia");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    
    printf("\n      30) What term describes the study of the origin and history of words?");
    printf("\n          1) Syntax         2) Etymology");
    printf("\n          3) Phonetics       4) Morphology");
    printf("\n  Answer=");
    scanf("%d", &answer);
    if (answer == 2) {
        count++;
    }

    printf("\n  You scored %d out of 30.\n", count);

}