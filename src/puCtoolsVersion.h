#ifndef METLIBS_PUCTOOLS_VERSION_H
#define METLIBS_PUCTOOLS_VERSION_H

#define METLIBS_PUCTOOLS_VERSION_MAJOR 6
#define METLIBS_PUCTOOLS_VERSION_MINOR 0
#define METLIBS_PUCTOOLS_VERSION_PATCH 0

#define METLIBS_PUCTOOLS_VERSION_INT(major,minor,patch) \
    (1000000*major + 1000*minor + patch)
#define METLIBS_PUCTOOLS_VERSION_CURRENT_INT \
    METLIBS_PUCTOOLS_VERSION_INT(METLIBS_PUCTOOLS_VERSION_MAJOR, METLIBS_PUCTOOLS_VERSION_MINOR, METLIBS_PUCTOOLS_VERSION_PATCH)

#endif // METLIBS_PUCTOOLS_VERSION_H
