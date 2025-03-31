QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    angulo_entre_vectores.cpp \
    cal_de_v_angulo.cpp \
    comprobacion_de_matriz.cpp \
    dirrecion_angulo.cpp \
    escalar_r2.cpp \
    escalar_r2_r3.cpp \
    escalar_r3.cpp \
    inversas.cpp \
    main.cpp \
    mainwindow.cpp \
    matris_a_vector.cpp \
    mul_matris_2x2.cpp \
    mul_matris_3x3.cpp \
    multiplicaciones_matris_3x3_2x2.cpp \
    producto_entre_vecores_r2.cpp \
    producto_entre_vecores_r3.cpp \
    producto_entre_vectores.cpp \
    producto_vectorial.cpp \
    resta_de_matrices_2x2.cpp \
    resta_de_matrices_2x2_3x3.cpp \
    resta_de_matrices_3x3.cpp \
    resta_de_vectores_r2.cpp \
    resta_de_vectores_r2_r3.cpp \
    resta_de_vectores_r3.cpp \
    suma_de_matrices_2x2.cpp \
    suma_de_matrices_2x2_3x3.cpp \
    suma_de_matrices_3x3.cpp \
    suma_de_vectores_2x2.cpp \
    suma_de_vectores_3x3.cpp \
    suma_de_vectores_r2_r3.cpp \
    sumas.cpp \
    sumas_de_vectores.cpp \
    vector_prat1.cpp \
    vectores_suma_angulo.cpp

HEADERS += \
    angulo_entre_vectores.h \
    cal_de_v_angulo.h \
    comprobacion_de_matriz.h \
    dirrecion_angulo.h \
    escalar_r2.h \
    escalar_r2_r3.h \
    escalar_r3.h \
    inversas.h \
    mainwindow.h \
    matris_a_vector.h \
    mul_matris_2x2.h \
    mul_matris_3x3.h \
    multiplicaciones_matris_3x3_2x2.h \
    producto_entre_vecores_r2.h \
    producto_entre_vecores_r3.h \
    producto_entre_vectores.h \
    producto_vectorial.h \
    resta_de_matrices_2x2.h \
    resta_de_matrices_2x2_3x3.h \
    resta_de_matrices_3x3.h \
    resta_de_vectores_r2.h \
    resta_de_vectores_r2_r3.h \
    resta_de_vectores_r3.h \
    suma_de_matrices_2x2.h \
    suma_de_matrices_2x2_3x3.h \
    suma_de_matrices_3x3.h \
    suma_de_vectores_2x2.h \
    suma_de_vectores_3x3.h \
    suma_de_vectores_r2_r3.h \
    sumas.h \
    sumas_de_vectores.h \
    vector_prat1.h \
    vectores_suma_angulo.h

FORMS += \
    angulo_entre_vectores.ui \
    cal_de_v_angulo.ui \
    comprobacion_de_matriz.ui \
    dirrecion_angulo.ui \
    escalar_r2.ui \
    escalar_r2_r3.ui \
    escalar_r3.ui \
    inversas.ui \
    mainwindow.ui \
    matris_a_vector.ui \
    mul_matris_2x2.ui \
    mul_matris_3x3.ui \
    multiplicaciones_matris_3x3_2x2.ui \
    producto_entre_vecores_r2.ui \
    producto_entre_vecores_r3.ui \
    producto_entre_vectores.ui \
    producto_vectorial.ui \
    resta_de_matrices_2x2.ui \
    resta_de_matrices_2x2_3x3.ui \
    resta_de_matrices_3x3.ui \
    resta_de_vectores_r2.ui \
    resta_de_vectores_r2_r3.ui \
    resta_de_vectores_r3.ui \
    suma_de_matrices_2x2.ui \
    suma_de_matrices_2x2_3x3.ui \
    suma_de_matrices_3x3.ui \
    suma_de_vectores_2x2.ui \
    suma_de_vectores_3x3.ui \
    suma_de_vectores_r2_r3.ui \
    sumas.ui \
    sumas_de_vectores.ui \
    vector_prat1.ui \
    vectores_suma_angulo.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    imagenes.qrc

DISTFILES +=
