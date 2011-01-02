struct Cartridge : property<Cartridge> {
  #include "mbc0/mbc0.hpp"
  #include "mbc1/mbc1.hpp"

  enum Mapper : unsigned {
    MBC0,
    MBC1,
    Unknown,
  };

  struct Information {
    string   name;
    uint8    cgbflag;
    uint8    sgbflag;

    Mapper   mapper;
    bool     ram;
    bool     battery;
    bool     rtc;

    unsigned romsize;
    unsigned ramsize;
  } info;

  readonly<bool> loaded;

  uint8_t *romdata;
  unsigned romsize;

  uint8_t *ramdata;
  unsigned ramsize;

  void load(uint8_t *data, unsigned size);
  void unload();

  uint8 rom_read(unsigned addr);
  void rom_write(unsigned addr, uint8 data);
  uint8 ram_read(unsigned addr);
  void ram_write(unsigned addr, uint8 data);

  void power();
  void reset();

  Cartridge();
  ~Cartridge();
};

extern Cartridge cartridge;
