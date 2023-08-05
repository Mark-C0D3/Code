#ifndef TIME_H
#define TIME_H

// Sekunden in ...
int s_to_m(int sekunden) { return sekunden / 60; }
int s_to_h(int sekunden) { return sekunden / 3600; }
int s_to_d(int sekunden) { return sekunden / 86400; }
int s_to_y(int sekunden) { return sekunden / 31536000; }  // Näherungsweise: 365 * 24 * 60 * 60

// Minuten in ...
int m_to_s(int minuten) { return minuten * 60; }
int m_to_h(int minuten) { return minuten / 60; }
int m_to_d(int minuten) { return minuten / 1440; }
int m_to_y(int minuten) { return minuten / 525600; }  // Näherungsweise: 365 * 24 * 60

// Stunden in ...
int h_to_s(int stunden) { return stunden * 3600; }
int h_to_m(int stunden) { return stunden * 60; }
int h_to_d(int stunden) { return stunden / 24; }
int h_to_y(int stunden) { return stunden / 8760; }  // Näherungsweise: 365 * 24

// Tage in ...
int d_to_s(int tage) { return tage * 86400; }
int d_to_m(int tage) { return tage * 1440; }
int d_to_h(int tage) { return tage * 24; }
int d_to_y(int tage) { return tage / 365; }

// Jahre in ...
int y_to_s(int jahre) { return jahre * 31536000; }  // Näherungsweise: 365 * 24 * 60 * 60
int y_to_m(int jahre) { return jahre * 525600; }    // Näherungsweise: 365 * 24 * 60
int y_to_h(int jahre) { return jahre * 8760; }      // Näherungsweise: 365 * 24
int y_to_d(int jahre) { return jahre * 365; }

#endif
