
// ModulusKey / PitchKey // SonicKey// TonalKey
class TonalKey {
// 
// key of C, key of D, etc
//
// forget about F# etc if it's too hard
};

class Tuning {
  enum tuning {equalTemperament, pythagorean, justIntonation, aaronMeanTone, silbermann, kirnberger, vallotti, werckmeister}
  // http://leware.net/temper/temper.htm
  tuning = equalTemperament;
};


class BaseFrequency {

  // 100 -- academic defined
  //
  // some cool sounding one?
  //
  // print out information about how what this choice does as piped through other classes
};


class TypeOfScale {
  enum scale {pentatonic, diatonic, chromatic};
};



class DoReMi {
  public: 
    enum sing {DO,RE,MI,SOL,LA};
    // need to be parameterized by "pentatonic", "diatonic", "chromatic" ?
};

class PentatonicDiatonicChromatic {};



//Hammers
class KeysThatLightUp {
  // parameters: keys on the keyboard (start with 88 but up for grabs
  //
  // do + 2 = re
  // re + 2 = mi
  // mi + 3 = sol
  // sol + 2 = la
  // la + 3 = do
  //
  //
  //
  // this is the output of everything else
};










class KeysThatCanLightUp {
  // output goes to hardware
  //
  // input comes from (
  //
  // could work on a guitar fretboard as well as standard 88-keys piano
  //
  // write only for 88 keys standard but have it moduled out so it could change later
};
