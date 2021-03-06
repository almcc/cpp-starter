#ifndef App_Logging_Settings_h
#define App_Logging_Settings_h

#include <map>
#include <string>

using namespace std;

namespace App
{
  namespace Configuration
  {
    class Settings
    {
      friend class SettingsTest;

      public:
        Settings();
        ~Settings();

        void set(string key, string value);
        string get(string key);

      private:
        map<string, string> settings;
    };
  }
}

#endif
