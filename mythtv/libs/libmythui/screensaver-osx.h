#ifndef MYTH_SCREENSAVER_OSX_H
#define MYTH_SCREENSAVER_OSX_H

#include "screensaver.h"

class ScreenSaverOSX : public ScreenSaver
{
public:
    ScreenSaverOSX();
    ~ScreenSaverOSX();

    void Disable(void) override; // ScreenSaver
    void Restore(void) override; // ScreenSaver
    void Reset(void) override; // ScreenSaver

    bool Asleep(void) override; // ScreenSaver

protected:
    class ScreenSaverOSXPrivate *d {nullptr};
};

#endif // MYTH_SCREENSAVER_OSX_H

