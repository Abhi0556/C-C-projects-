#include <stdio.h>
#include <stdlib.h>

int display();
int General();
int rules();
int Science();
int History();

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

    printf("\n           ----------Second Level---------");
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
}