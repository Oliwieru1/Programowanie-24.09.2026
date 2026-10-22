Licznik WPF
📌 Opis projektu

Prosta aplikacja desktopowa stworzona w technologii WPF (Windows Presentation Foundation) z wykorzystaniem języka C# i języka znaczników XAML.

Aplikacja umożliwia obsługę licznika za pomocą przycisków. Wartość licznika zmienia kolor w zależności od aktualnego wyniku, a po osiągnięciu wartości 10 lub większej wyświetlany jest specjalny komunikat.

✨ Funkcjonalności
➕ Dodawanie – zwiększa wartość licznika o 1.
➖ Odejmowanie – zmniejsza wartość licznika o 1.
🔄 Resetowanie – ustawia licznik na 0.
🎨 Zmiana koloru licznika:
Zielony – wartość większa od 0.
Czerwony – wartość mniejsza od 0.
Czarny – wartość równa 0.
🏆 Komunikat o osiągnięciu celu – po uzyskaniu wartości 10 lub większej wyświetla się komunikat: „Brawo! Osiągnięto 10 lub więcej!”.
🛠️ Technologie
C#
WPF (Windows Presentation Foundation)
XAML
.NET
Visual Studio
🖥️ Interfejs aplikacji

Interfejs zawiera:

Aktualną wartość licznika.
Przycisk „Dodaj 1”.
Przycisk „Odejmij 1”.
Przycisk „Resetuj licznik”.
Pole komunikatu wyświetlanego po osiągnięciu wartości 10.

Aplikacja posiada jasne tło i kolorowe przyciski, dzięki czemu interfejs jest prosty i czytelny.

🚀 Uruchomienie projektu
Otwórz projekt w programie Visual Studio.
Upewnij się, że masz zainstalowane odpowiednie środowisko .NET oraz obsługę WPF.
Zbuduj projekt za pomocą opcji Build.
Uruchom aplikację, naciskając F5.
📂 Struktura projektu
WpfApp1/
├── MainWindow.xaml       # Interfejs użytkownika
├── MainWindow.xaml.cs    # Logika aplikacji w C#
├── App.xaml              # Konfiguracja aplikacji
├── App.xaml.cs           # Kod startowy aplikacji
└── WpfApp1.csproj        # Plik projektu


Struktura może się różnić w zależności od konfiguracji projektu.

⚙️ Zasada działania

Logika aplikacji znajduje się w pliku MainWindow.xaml.cs.

Metoda UpdateCounter() aktualizuje wartość licznika, ustawia kolor tekstu oraz sprawdza, czy należy wyświetlić komunikat o osiągnięciu wartości 10.

Increment_Click() – zwiększa licznik.
Decrement_Click() – zmniejsza licznik.
Reset_Click() – zeruje licznik.
UpdateCounter() – aktualizuje interfejs aplikacji.
🎯 Cel projektu

Celem projektu jest poznanie podstaw tworzenia aplikacji desktopowych w WPF, obsługi zdarzeń przycisków, aktualizacji elementów interfejsu oraz wykorzystania instrukcji warunkowych w języku C#.
