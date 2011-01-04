struct MainWindow : Window {
  Menu system;
  MenuItem systemLoadCartridge;
  MenuSeparator systemSeparator1;
  MenuItem systemPower;

  Menu settings;
  MenuCheckItem settingsVideoSync;

  Menu tools;
  MenuCheckItem toolsTraceCPU;

  Menu help;
  MenuItem helpAbout;

  Viewport viewport;

  void create();
};

extern MainWindow mainWindow;
