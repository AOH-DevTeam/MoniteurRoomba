#include "ConfigLiaison.h"

QString ConfigLiaison::port() const {
    return mPort;
}

int ConfigLiaison::debit() const {
    return mDebit;
}

void ConfigLiaison::setPort(QString port) {
    mPort = port;
}

void ConfigLiaison::setDebit(int debit) {
    mDebit = debit;
}
