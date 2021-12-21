/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _MTSUBSPROP_
#define _MTSUBSPROP_
#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <sys_lib.h>
#include <brsystem.h>

/* Datatypes and datatypes of function blocks */
typedef enum MTSubsPropStatusEnum
{	mtWARN_RELATIVE_HUMIDITY_LIMITED = 36480,
	mtERR_IAPWS_REGION_NOT_SUPPORTED = 36481,
	mtERR_PRESSURE_OUT_OF_REGION = 36482,
	mtERR_TEMPERATURE_OUT_OF_REGION = 36483,
	mtERR_REGION_3_NOT_SUPPORTED = 36484,
	mtERR_NO_TEMP_PRESSURE_COUPLING = 36485,
	mtERR_PRESSURE_EXCEED_LIMITS = 36486,
	mtERR_TEMPERATURE_EXCEED_LIMITS = 36487,
	mtERR_REL_HUMIDITY_EXCEED_LIMITS = 36488,
	mtERR_UNBALANCED_MOLE_FRACTIONS = 36489
} MTSubsPropStatusEnum;

typedef struct MTSubsPropEnthalpyHumAirInternal
{	double N2MolarFraction;
	double O2MolarFraction;
	double ArMolarFraction;
	double N2MolarMass;
	double O2MolarMass;
	double ArMolarMass;
	double H2oMolarMass;
	unsigned long Bootkey;
} MTSubsPropEnthalpyHumAirInternal;

typedef struct MTSubsPropEnthalpyIAPWS
{
	/* VAR_INPUT (analog) */
	unsigned char Region;
	double Pressure;
	double Temperature;
	/* VAR_OUTPUT (analog) */
	enum MTSubsPropStatusEnum StatusID;
	double EnthalpyFluid;
	double EnthalpyVapor;
	double TRngMax;
	double TRngMin;
	double PRngMax;
	double PRngMin;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit TOutOfRng;
	plcbit POutOfRng;
} MTSubsPropEnthalpyIAPWS_typ;

typedef struct MTSubsPropDensityIAPWS
{
	/* VAR_INPUT (analog) */
	unsigned char Region;
	double Pressure;
	double Temperature;
	/* VAR_OUTPUT (analog) */
	enum MTSubsPropStatusEnum StatusID;
	double DensityFluid;
	double DensityVapor;
	double TRngMax;
	double TRngMin;
	double PRngMax;
	double PRngMin;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit TOutOfRng;
	plcbit POutOfRng;
} MTSubsPropDensityIAPWS_typ;

typedef struct MTSubsPropSatTemperatureIAPWS
{
	/* VAR_INPUT (analog) */
	double Pressure;
	/* VAR_OUTPUT (analog) */
	enum MTSubsPropStatusEnum StatusID;
	double Temperature;
	double PRngMax;
	double PRngMin;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit POutOfRng;
} MTSubsPropSatTemperatureIAPWS_typ;

typedef struct MTSubsPropSatPressureIAPWS
{
	/* VAR_INPUT (analog) */
	double Temperature;
	/* VAR_OUTPUT (analog) */
	enum MTSubsPropStatusEnum StatusID;
	double Pressure;
	double TRngMax;
	double TRngMin;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit TOutOfRng;
} MTSubsPropSatPressureIAPWS_typ;

typedef struct MTSubsPropSubPressureIAPWS
{
	/* VAR_INPUT (analog) */
	double Temperature;
	/* VAR_OUTPUT (analog) */
	enum MTSubsPropStatusEnum StatusID;
	double Pressure;
	double TRngMax;
	double TRngMin;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit TOutOfRng;
} MTSubsPropSubPressureIAPWS_typ;

typedef struct MTSubsPropEnthalpyHumAir
{
	/* VAR_INPUT (analog) */
	double Pressure;
	double Temperature;
	double RelHum;
	/* VAR_OUTPUT (analog) */
	enum MTSubsPropStatusEnum StatusID;
	double Enthalpy;
	double EnthalpyAir;
	double EnthalpyH2o;
	double MolMassDryAir;
	double SPressure;
	double DewPoint;
	double MoistureCont;
	double MaxMoistureCont;
	double RelHumMax;
	double TRngMax;
	double TRngMin;
	double PRngMax;
	double PRngMin;
	/* VAR (analog) */
	struct MTSubsPropEnthalpyHumAirInternal Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit RelHumOutOfRng;
	plcbit TOutOfRng;
	plcbit POutOfRng;
} MTSubsPropEnthalpyHumAir_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void MTSubsPropEnthalpyIAPWS(struct MTSubsPropEnthalpyIAPWS* inst);
_BUR_PUBLIC void MTSubsPropDensityIAPWS(struct MTSubsPropDensityIAPWS* inst);
_BUR_PUBLIC void MTSubsPropSatTemperatureIAPWS(struct MTSubsPropSatTemperatureIAPWS* inst);
_BUR_PUBLIC void MTSubsPropSatPressureIAPWS(struct MTSubsPropSatPressureIAPWS* inst);
_BUR_PUBLIC void MTSubsPropSubPressureIAPWS(struct MTSubsPropSubPressureIAPWS* inst);
_BUR_PUBLIC void MTSubsPropEnthalpyHumAir(struct MTSubsPropEnthalpyHumAir* inst);


#ifdef __cplusplus
};
#endif
#endif /* _MTSUBSPROP_ */

