
extern zend_class_entry *stub_constantsinterfaceb_ce;

ZEPHIR_INIT_CLASS(Stub_ConstantsInterfaceB);

PHP_METHOD(Stub_ConstantsInterfaceB, testReadInterfaceConstant1);
PHP_METHOD(Stub_ConstantsInterfaceB, testReadInterfaceConstant2);
PHP_METHOD(Stub_ConstantsInterfaceB, testReadInterfaceConstant3);
PHP_METHOD(Stub_ConstantsInterfaceB, testReadInterfaceConstant4);
PHP_METHOD(Stub_ConstantsInterfaceB, testReadInterfaceConstant5);
PHP_METHOD(Stub_ConstantsInterfaceB, testReadInterfaceConstant6);

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_constantsinterfaceb_testreadinterfaceconstant1, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_constantsinterfaceb_testreadinterfaceconstant2, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_constantsinterfaceb_testreadinterfaceconstant3, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_constantsinterfaceb_testreadinterfaceconstant4, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_constantsinterfaceb_testreadinterfaceconstant5, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_constantsinterfaceb_testreadinterfaceconstant6, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(stub_constantsinterfaceb_method_entry) {
#if PHP_VERSION_ID >= 80000
	PHP_ME(Stub_ConstantsInterfaceB, testReadInterfaceConstant1, arginfo_stub_constantsinterfaceb_testreadinterfaceconstant1, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Stub_ConstantsInterfaceB, testReadInterfaceConstant1, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Stub_ConstantsInterfaceB, testReadInterfaceConstant2, arginfo_stub_constantsinterfaceb_testreadinterfaceconstant2, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Stub_ConstantsInterfaceB, testReadInterfaceConstant2, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Stub_ConstantsInterfaceB, testReadInterfaceConstant3, arginfo_stub_constantsinterfaceb_testreadinterfaceconstant3, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Stub_ConstantsInterfaceB, testReadInterfaceConstant3, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Stub_ConstantsInterfaceB, testReadInterfaceConstant4, arginfo_stub_constantsinterfaceb_testreadinterfaceconstant4, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Stub_ConstantsInterfaceB, testReadInterfaceConstant4, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Stub_ConstantsInterfaceB, testReadInterfaceConstant5, arginfo_stub_constantsinterfaceb_testreadinterfaceconstant5, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Stub_ConstantsInterfaceB, testReadInterfaceConstant5, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Stub_ConstantsInterfaceB, testReadInterfaceConstant6, arginfo_stub_constantsinterfaceb_testreadinterfaceconstant6, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Stub_ConstantsInterfaceB, testReadInterfaceConstant6, NULL, ZEND_ACC_PUBLIC)
#endif
	PHP_FE_END
};