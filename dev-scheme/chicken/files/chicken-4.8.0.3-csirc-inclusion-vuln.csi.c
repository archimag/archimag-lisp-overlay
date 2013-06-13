/* Generated from csi.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-04-11 16:05
   Version 4.8.0.3 (stability/4.8.0) (rev 091c3d9)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2013-03-12 on aeryn.xorinia.dim (Darwin)
   command line: csi.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -output-file csi.c -extend ./private-namespace.scm
   used units: library eval chicken_2dsyntax ports extras
*/

#include "chicken.h"

#include <signal.h>

#if defined(HAVE_DIRECT_H)
# include <direct.h>
#else
# define _getcwd(buf, len)       NULL
#endif

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[408];
static double C_possibly_force_alignment;


/* from k1982 */
static C_word C_fcall stub75(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub75(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_mpointer(&C_a,(void*)_getcwd(t0,t1));
return C_r;}

C_noret_decl(f_3716)
static void C_ccall f_3716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2803)
static void C_ccall f_2803(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2803)
static void C_ccall f_2803r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3971)
static void C_ccall f_3971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3707)
static void C_ccall f_3707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2806)
static void C_ccall f_2806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1849)
static void C_ccall f_1849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3966)
static void C_ccall f_3966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4170)
static void C_ccall f_4170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5235)
static void C_ccall f_5235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3955)
static void C_ccall f_3955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5224)
static void C_ccall f_5224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4185)
static void C_ccall f_4185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3428)
static void C_ccall f_3428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3423)
static void C_ccall f_3423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4934)
static void C_fcall f_4934(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2835)
static void C_ccall f_2835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2837)
static void C_ccall f_2837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4940)
static void C_fcall f_4940(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5209)
static void C_ccall f_5209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2111)
static void C_ccall f_2111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2845)
static void C_ccall f_2845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2842)
static void C_ccall f_2842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5276)
static void C_ccall f_5276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5265)
static void C_ccall f_5265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5267)
static void C_fcall f_5267(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4417)
static void C_ccall f_4417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4119)
static void C_ccall f_4119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3905)
static void C_ccall f_3905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4425)
static void C_ccall f_4425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4428)
static void C_ccall f_4428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4127)
static void C_ccall f_4127(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4475)
static void C_fcall f_4475(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4408)
static void C_fcall f_4408(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3173)
static C_word C_fcall f_3173(C_word t0,C_word t1);
C_noret_decl(f_4451)
static void C_fcall f_4451(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4455)
static void C_fcall f_4455(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3946)
static void C_fcall f_3946(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6190)
static void C_ccall f_6190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4461)
static void C_ccall f_4461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2558)
static void C_ccall f_2558(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2558)
static void C_ccall f_2558r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3938)
static void C_ccall f_3938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3935)
static void C_ccall f_3935(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3934)
static void C_ccall f_3934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2553)
static void C_ccall f_2553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3488)
static void C_ccall f_3488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6178)
static void C_ccall f_6178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3624)
static void C_ccall f_3624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6171)
static void C_ccall f_6171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6175)
static void C_ccall f_6175(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4449)
static void C_ccall f_4449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4440)
static void C_ccall f_4440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4443)
static void C_ccall f_4443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2572)
static void C_ccall f_2572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6157)
static void C_ccall f_6157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2548)
static void C_ccall f_2548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2540)
static void C_ccall f_2540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2545)
static void C_ccall f_2545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3494)
static void C_ccall f_3494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6147)
static void C_ccall f_6147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6149)
static void C_fcall f_6149(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4634)
static void C_ccall f_4634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4632)
static void C_ccall f_4632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6143)
static void C_ccall f_6143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3117)
static void C_ccall f_3117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1921)
static void C_ccall f_1921(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1928)
static void C_ccall f_1928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4606)
static void C_ccall f_4606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3108)
static void C_fcall f_3108(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4483)
static void C_fcall f_4483(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5537)
static void C_ccall f_5537(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1930)
static void C_ccall f_1930(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2586)
static void C_ccall f_2586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1910)
static void C_ccall f_1910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6106)
static void C_ccall f_6106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5584)
static void C_ccall f_5584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5707)
static void C_ccall f_5707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4646)
static void C_fcall f_4646(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5704)
static void C_ccall f_5704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2520)
static void C_ccall f_2520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3692)
static void C_ccall f_3692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4761)
static void C_ccall f_4761(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4764)
static void C_fcall f_4764(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4768)
static void C_ccall f_4768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5567)
static void C_ccall f_5567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2364)
static void C_ccall f_2364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3686)
static void C_ccall f_3686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3683)
static void C_ccall f_3683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2356)
static void C_ccall f_2356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2358)
static void C_ccall f_2358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4734)
static void C_fcall f_4734(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4732)
static void C_fcall f_4732(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5556)
static void C_fcall f_5556(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5551)
static void C_ccall f_5551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2375)
static void C_ccall f_2375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2367)
static void C_ccall f_2367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4744)
static void C_ccall f_4744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2511)
static void C_fcall f_2511(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5549)
static void C_ccall f_5549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5545)
static void C_ccall f_5545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2567)
static void C_ccall f_2567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5547)
static void C_ccall f_5547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2569)
static void C_ccall f_2569(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2569)
static void C_ccall f_2569r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5541)
static void C_ccall f_5541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2379)
static void C_ccall f_2379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4683)
static void C_fcall f_4683(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2377)
static void C_ccall f_2377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2561)
static void C_ccall f_2561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2392)
static void C_ccall f_2392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2390)
static void C_ccall f_2390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2532)
static void C_ccall f_2532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1988)
static void C_fcall f_1988(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5720)
static void C_ccall f_5720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5722)
static void C_fcall f_5722(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4770)
static void C_ccall f_4770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2506)
static void C_ccall f_2506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1997)
static void C_ccall f_1997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1995)
static void C_ccall f_1995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5510)
static void C_ccall f_5510(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5510)
static void C_ccall f_5510r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5712)
static void C_ccall f_5712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5715)
static void C_ccall f_5715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4164)
static void C_ccall f_4164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f6730)
static void C_ccall f6730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4781)
static void C_fcall f_4781(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f6734)
static void C_ccall f6734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5501)
static void C_ccall f_5501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5508)
static void C_ccall f_5508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5782)
static void C_fcall f_5782(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4139)
static void C_ccall f_4139(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4136)
static void C_ccall f_4136(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4136)
static void C_ccall f_4136r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1971)
static void C_ccall f_1971(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1970)
static void C_ccall f_1970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5570)
static void C_ccall f_5570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5777)
static void C_ccall f_5777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4142)
static void C_fcall f_4142(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1942)
static void C_ccall f_1942(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1954)
static void C_fcall f_1954(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5752)
static void C_fcall f_5752(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2936)
static void C_ccall f_2936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2931)
static void C_ccall f_2931(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2931)
static void C_ccall f_2931r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2312)
static void C_ccall f_2312(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2946)
static void C_ccall f_2946(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2946)
static void C_ccall f_2946r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2945)
static void C_ccall f_2945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2942)
static void C_ccall f_2942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2958)
static void C_ccall f_2958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2953)
static void C_fcall f_2953(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2955)
static void C_ccall f_2955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2336)
static void C_ccall f_2336(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5791)
static void C_ccall f_5791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2328)
static void C_fcall f_2328(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3157)
static void C_ccall f_3157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2962)
static void C_ccall f_2962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2960)
static void C_ccall f_2960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2964)
static void C_fcall f_2964(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2979)
static void C_ccall f_2979(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2342)
static void C_ccall f_2342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2971)
static void C_ccall f_2971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2976)
static void C_ccall f_2976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3132)
static void C_fcall f_3132(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3130)
static void C_ccall f_3130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2982)
static void C_ccall f_2982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3864)
static void C_fcall f_3864(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3855)
static void C_ccall f_3855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3853)
static void C_ccall f_3853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5747)
static void C_ccall f_5747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3842)
static void C_ccall f_3842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5191)
static void C_ccall f_5191(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3830)
static void C_ccall f_3830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5183)
static void C_fcall f_5183(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4836)
static void C_ccall f_4836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4838)
static void C_ccall f_4838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5175)
static void C_ccall f_5175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5172)
static void C_ccall f_5172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5344)
static void C_ccall f_5344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5342)
static void C_ccall f_5342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5177)
static void C_fcall f_5177(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5348)
static void C_ccall f_5348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5346)
static void C_ccall f_5346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5170)
static void C_fcall f_5170(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5340)
static void C_ccall f_5340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4844)
static void C_ccall f_4844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4840)
static void C_ccall f_4840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4842)
static void C_ccall f_4842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5165)
static void C_fcall f_5165(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5162)
static void C_ccall f_5162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3896)
static void C_fcall f_3896(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5167)
static void C_ccall f_5167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5374)
static void C_ccall f_5374(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5377)
static void C_ccall f_5377(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5160)
static void C_fcall f_5160(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4992)
static void C_fcall f_4992(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3888)
static void C_ccall f_3888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5152)
static void C_ccall f_5152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5154)
static void C_ccall f_5154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5156)
static void C_ccall f_5156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5158)
static void C_ccall f_5158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2908)
static void C_ccall f_2908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2902)
static void C_ccall f_2902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3872)
static void C_ccall f_3872(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5148)
static void C_ccall f_5148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5352)
static void C_fcall f_5352(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5357)
static void C_fcall f_5357(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5350)
static void C_ccall f_5350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2732)
static void C_fcall f_2732(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2727)
static void C_ccall f_2727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4872)
static void C_ccall f_4872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4878)
static void C_ccall f_4878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2910)
static void C_fcall f_2910(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2897)
static void C_ccall f_2897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2892)
static void C_ccall f_2892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4880)
static void C_fcall f_4880(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4889)
static void C_ccall f_4889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2926)
static void C_ccall f_2926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5123)
static C_word C_fcall f_5123(C_word t0);
C_noret_decl(f_2752)
static void C_ccall f_2752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5391)
static void C_ccall f_5391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3826)
static void C_ccall f_3826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3820)
static void C_ccall f_3820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3088)
static void C_ccall f_3088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4092)
static void C_ccall f_4092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4816)
static void C_fcall f_4816(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4811)
static void C_ccall f_4811(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2708)
static void C_ccall f_2708(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2707)
static void C_ccall f_2707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5322)
static void C_ccall f_5322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2239)
static void C_ccall f_2239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5329)
static void C_ccall f_5329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5324)
static void C_ccall f_5324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4825)
static void C_ccall f_4825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2241)
static void C_ccall f_2241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4084)
static void C_ccall f_4084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2254)
static void C_ccall f_2254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5309)
static void C_ccall f_5309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5307)
static void C_fcall f_5307(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5305)
static void C_ccall f_5305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5303)
static void C_ccall f_5303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2741)
static void C_ccall f_2741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2261)
static void C_ccall f_2261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4802)
static void C_ccall f_4802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5952)
static void C_ccall f_5952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5950)
static void C_ccall f_5950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5959)
static void C_ccall f_5959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5331)
static void C_ccall f_5331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2267)
static void C_ccall f_2267(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2267)
static void C_ccall f_2267r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5336)
static void C_ccall f_5336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3025)
static void C_ccall f_3025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3027)
static void C_ccall f_3027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5946)
static void C_ccall f_5946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3029)
static void C_ccall f_3029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5944)
static void C_ccall f_5944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5948)
static void C_ccall f_5948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5369)
static void C_ccall f_5369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3023)
static void C_ccall f_3023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2281)
static void C_ccall f_2281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2285)
static void C_ccall f_2285(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5931)
static void C_ccall f_5931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5939)
static void C_ccall f_5939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5311)
static void C_fcall f_5311(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5317)
static void C_ccall f_5317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5315)
static void C_ccall f_5315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5313)
static void C_ccall f_5313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3007)
static void C_ccall f_3007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5925)
static void C_ccall f_5925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3000)
static void C_ccall f_3000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4023)
static void C_ccall f_4023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4027)
static void C_ccall f_4027(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5094)
static void C_ccall f_5094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3293)
static void C_ccall f_3293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3291)
static void C_ccall f_3291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5087)
static void C_ccall f_5087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6091)
static void C_ccall f_6091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3282)
static void C_fcall f_3282(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6097)
static void C_ccall f_6097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4001)
static void C_ccall f_4001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5078)
static void C_ccall f_5078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3274)
static void C_ccall f_3274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4294)
static void C_ccall f_4294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5053)
static void C_fcall f_5053(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4276)
static void C_fcall f_4276(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2037)
static void C_ccall f_2037(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4272)
static void C_ccall f_4272(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5046)
static void C_ccall f_5046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5049)
static void C_ccall f_5049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2041)
static void C_ccall f_2041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6052)
static void C_ccall f_6052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6055)
static void C_ccall f_6055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6057)
static void C_ccall f_6057(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4280)
static void C_ccall f_4280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2207)
static void C_ccall f_2207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5037)
static void C_ccall f_5037(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6041)
static void C_ccall f_6041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6044)
static void C_ccall f_6044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6046)
static void C_ccall f_6046(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2215)
static void C_ccall f_2215(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5026)
static void C_ccall f_5026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2064)
static void C_ccall f_2064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6076)
static void C_ccall f_6076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4514)
static void C_ccall f_4514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4510)
static void C_ccall f_4510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4512)
static void C_ccall f_4512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4517)
static void C_ccall f_4517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5013)
static void C_fcall f_5013(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4519)
static void C_ccall f_4519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2070)
static void C_ccall f_2070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2073)
static void C_ccall f_2073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2075)
static void C_ccall f_2075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6066)
static void C_fcall f_6066(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3319)
static void C_ccall f_3319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4526)
static void C_ccall f_4526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4523)
static void C_ccall f_4523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4521)
static void C_ccall f_4521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2080)
static void C_ccall f_2080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3206)
static C_word C_fcall f_3206(C_word t0);
C_noret_decl(f_6017)
static void C_ccall f_6017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2086)
static void C_ccall f_2086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2088)
static void C_fcall f_2088(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4211)
static void C_ccall f_4211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2099)
static void C_ccall f_2099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2097)
static void C_ccall f_2097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4504)
static void C_ccall f_4504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4506)
static void C_ccall f_4506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4508)
static void C_ccall f_4508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6034)
static void C_ccall f_6034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6031)
static void C_ccall f_6031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6039)
static void C_ccall f_6039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4551)
static void C_fcall f_4551(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6028)
static void C_ccall f_6028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5872)
static void C_ccall f_5872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5878)
static void C_ccall f_5878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3355)
static void C_ccall f_3355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4567)
static void C_ccall f_4567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3359)
static void C_ccall f_3359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3357)
static void C_ccall f_3357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4560)
static void C_ccall f_4560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4565)
static void C_ccall f_4565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4562)
static void C_ccall f_4562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4203)
static void C_fcall f_4203(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5861)
static void C_ccall f_5861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3343)
static void C_ccall f_3343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5863)
static void C_ccall f_5863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4538)
static void C_ccall f_4538(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4546)
static void C_ccall f_4546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5855)
static void C_ccall f_5855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f6861)
static void C_ccall f6861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2644)
static void C_ccall f_2644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5843)
static void C_ccall f_5843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5847)
static void C_ccall f_5847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5845)
static void C_ccall f_5845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4597)
static void C_fcall f_4597(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3507)
static void C_ccall f_3507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3504)
static void C_ccall f_3504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3502)
static void C_ccall f_3502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2655)
static void C_ccall f_2655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5900)
static void C_fcall f_5900(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5831)
static void C_ccall f_5831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3067)
static void C_ccall f_3067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3061)
static void C_ccall f_3061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3064)
static void C_ccall f_3064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2003)
static void C_ccall f_2003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3536)
static void C_ccall f_3536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3533)
static void C_ccall f_3533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3531)
static void C_ccall f_3531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5822)
static void C_fcall f_5822(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3058)
static void C_ccall f_3058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3052)
static void C_ccall f_3052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4570)
static void C_ccall f_4570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2666)
static void C_ccall f_2666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2016)
static C_word C_fcall f_2016(C_word t0,C_word t1);
C_noret_decl(f_4059)
static void C_fcall f_4059(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3046)
static void C_ccall f_3046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4054)
static void C_ccall f_4054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3517)
static void C_ccall f_3517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2684)
static void C_ccall f_2684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3031)
static void C_ccall f_3031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3544)
static void C_ccall f_3544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2694)
static void C_ccall f_2694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2692)
static void C_ccall f_2692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2696)
static void C_ccall f_2696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3574)
static void C_ccall f_3574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3571)
static void C_ccall f_3571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4046)
static void C_ccall f_4046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4040)
static void C_ccall f_4040(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3522)
static void C_fcall f_3522(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2633)
static void C_ccall f_2633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3585)
static void C_fcall f_3585(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3587)
static void C_ccall f_3587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3562)
static void C_ccall f_3562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2672)
static void C_ccall f_2672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5895)
static void C_ccall f_5895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5893)
static void C_ccall f_5893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3595)
static void C_fcall f_3595(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2600)
static void C_ccall f_2600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5887)
static void C_ccall f_5887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5885)
static void C_ccall f_5885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3253)
static void C_fcall f_3253(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2495)
static void C_ccall f_2495(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2498)
static void C_ccall f_2498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2616)
static void C_ccall f_2616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2619)
static void C_ccall f_2619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5620)
static void C_ccall f_5620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5622)
static void C_ccall f_5622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3248)
static void C_ccall f_3248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3242)
static void C_ccall f_3242(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2468)
static void C_ccall f_2468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3235)
static void C_ccall f_3235(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3235)
static void C_ccall f_3235r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5614)
static void C_ccall f_5614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5616)
static void C_ccall f_5616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5618)
static void C_ccall f_5618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3233)
static void C_ccall f_3233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2480)
static void C_ccall f_2480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5602)
static void C_ccall f_5602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5605)
static void C_fcall f_5605(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2489)
static void C_ccall f_2489(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2488)
static void C_ccall f_2488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4236)
static void C_ccall f_4236(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4240)
static void C_ccall f_4240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5811)
static void C_ccall f_5811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5644)
static void C_ccall f_5644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5642)
static void C_ccall f_5642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3992)
static void C_fcall f_3992(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5490)
static void C_ccall f_5490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5802)
static void C_fcall f_5802(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2416)
static void C_ccall f_2416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2418)
static void C_ccall f_2418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5441)
static void C_ccall f_5441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5476)
static void C_ccall f_5476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2403)
static void C_ccall f_2403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2405)
static void C_ccall f_2405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5456)
static void C_ccall f_5456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2451)
static void C_ccall f_2451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2454)
static void C_ccall f_2454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2459)
static void C_fcall f_2459(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2422)
static void C_ccall f_2422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2420)
static void C_ccall f_2420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4323)
static void C_ccall f_4323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4320)
static void C_ccall f_4320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6212)
static void C_ccall f_6212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6218)
static void C_ccall f_6218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2798)
static void C_ccall f_2798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4331)
static void C_fcall f_4331(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5463)
static void C_ccall f_5463(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5463)
static void C_ccall f_5463r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_6202)
static void C_ccall f_6202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6200)
static void C_ccall f_6200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6209)
static void C_ccall f_6209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4303)
static void C_fcall f_4303(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5417)
static void C_ccall f_5417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2992)
static void C_fcall f_2992(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6230)
static void C_ccall f_6230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5633)
static void C_ccall f_5633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5631)
static void C_ccall f_5631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4316)
static void C_ccall f_4316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4314)
static void C_ccall f_4314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4312)
static void C_ccall f_4312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4318)
static void C_ccall f_4318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6221)
static void C_ccall f_6221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1881)
static void C_ccall f_1881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1887)
static void C_ccall f_1887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1885)
static void C_ccall f_1885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3722)
static void C_ccall f_3722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2138)
static void C_fcall f_2138(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4927)
static void C_ccall f_4927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4929)
static void C_ccall f_4929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2130)
static void C_ccall f_2130(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4377)
static void C_fcall f_4377(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5428)
static void C_ccall f_5428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1828)
static void C_ccall f_1828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5252)
static void C_fcall f_5252(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5259)
static void C_ccall f_5259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2877)
static void C_ccall f_2877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4345)
static void C_ccall f_4345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4342)
static void C_ccall f_4342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1832)
static void C_ccall f_1832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4986)
static void C_fcall f_4986(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1830)
static void C_ccall f_1830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1836)
static void C_ccall f_1836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1834)
static void C_ccall f_1834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5247)
static void C_ccall f_5247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2151)
static void C_ccall f_2151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5241)
static void C_ccall f_5241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2882)
static void C_ccall f_2882(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5483)
static void C_ccall f_5483(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5483)
static void C_ccall f_5483r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2887)
static void C_ccall f_2887(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2165)
static void C_ccall f_2165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4952)
static void C_fcall f_4952(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1895)
static void C_ccall f_1895(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1893)
static void C_ccall f_1893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1853)
static void C_ccall f_1853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1856)
static void C_fcall f_1856(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1858)
static void C_ccall f_1858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2174)
static void C_ccall f_2174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2189)
static void C_ccall f_2189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2826)
static void C_ccall f_2826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2820)
static void C_ccall f_2820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2827)
static void C_ccall f_2827(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1862)
static void C_ccall f_1862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1864)
static void C_ccall f_1864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5294)
static void C_ccall f_5294(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2180)
static void C_fcall f_2180(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2196)
static void C_ccall f_2196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2199)
static void C_ccall f_2199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1870)
static void C_ccall f_1870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5287)
static void C_ccall f_5287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5285)
static void C_ccall f_5285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5282)
static void C_ccall f_5282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2191)
static void C_ccall f_2191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2194)
static void C_ccall f_2194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2852)
static void C_fcall f_2852(C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_4934)
static void C_fcall trf_4934(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4934(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4934(t0,t1,t2);}

C_noret_decl(trf_4940)
static void C_fcall trf_4940(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4940(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4940(t0,t1,t2);}

C_noret_decl(trf_5267)
static void C_fcall trf_5267(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5267(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5267(t0,t1,t2);}

C_noret_decl(trf_4475)
static void C_fcall trf_4475(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4475(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4475(t0,t1);}

C_noret_decl(trf_4408)
static void C_fcall trf_4408(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4408(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4408(t0,t1,t2);}

C_noret_decl(trf_4451)
static void C_fcall trf_4451(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4451(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4451(t0,t1);}

C_noret_decl(trf_4455)
static void C_fcall trf_4455(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4455(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4455(t0,t1);}

C_noret_decl(trf_3946)
static void C_fcall trf_3946(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3946(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3946(t0,t1,t2);}

C_noret_decl(trf_6149)
static void C_fcall trf_6149(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6149(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6149(t0,t1);}

C_noret_decl(trf_3108)
static void C_fcall trf_3108(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3108(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3108(t0,t1,t2);}

C_noret_decl(trf_4483)
static void C_fcall trf_4483(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4483(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4483(t0,t1,t2,t3);}

C_noret_decl(trf_4646)
static void C_fcall trf_4646(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4646(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4646(t0,t1);}

C_noret_decl(trf_4764)
static void C_fcall trf_4764(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4764(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4764(t0,t1,t2);}

C_noret_decl(trf_4734)
static void C_fcall trf_4734(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4734(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4734(t0,t1,t2);}

C_noret_decl(trf_4732)
static void C_fcall trf_4732(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4732(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4732(t0,t1);}

C_noret_decl(trf_5556)
static void C_fcall trf_5556(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5556(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5556(t0,t1,t2);}

C_noret_decl(trf_2511)
static void C_fcall trf_2511(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2511(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2511(t0,t1,t2);}

C_noret_decl(trf_4683)
static void C_fcall trf_4683(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4683(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4683(t0,t1);}

C_noret_decl(trf_1988)
static void C_fcall trf_1988(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1988(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1988(t0,t1);}

C_noret_decl(trf_5722)
static void C_fcall trf_5722(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5722(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5722(t0,t1,t2);}

C_noret_decl(trf_4781)
static void C_fcall trf_4781(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4781(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4781(t0,t1,t2);}

C_noret_decl(trf_5782)
static void C_fcall trf_5782(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5782(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5782(t0,t1,t2);}

C_noret_decl(trf_4142)
static void C_fcall trf_4142(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4142(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4142(t0,t1,t2);}

C_noret_decl(trf_1954)
static void C_fcall trf_1954(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1954(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1954(t0,t1);}

C_noret_decl(trf_5752)
static void C_fcall trf_5752(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5752(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5752(t0,t1,t2);}

C_noret_decl(trf_2953)
static void C_fcall trf_2953(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2953(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2953(t0,t1);}

C_noret_decl(trf_2328)
static void C_fcall trf_2328(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2328(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2328(t0,t1);}

C_noret_decl(trf_2964)
static void C_fcall trf_2964(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2964(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2964(t0,t1);}

C_noret_decl(trf_3132)
static void C_fcall trf_3132(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3132(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3132(t0,t1,t2);}

C_noret_decl(trf_3864)
static void C_fcall trf_3864(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3864(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3864(t0,t1,t2);}

C_noret_decl(trf_5183)
static void C_fcall trf_5183(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5183(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5183(t0,t1,t2);}

C_noret_decl(trf_5177)
static void C_fcall trf_5177(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5177(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5177(t0,t1,t2);}

C_noret_decl(trf_5170)
static void C_fcall trf_5170(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5170(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5170(t0,t1);}

C_noret_decl(trf_5165)
static void C_fcall trf_5165(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5165(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5165(t0,t1);}

C_noret_decl(trf_3896)
static void C_fcall trf_3896(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3896(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3896(t0,t1,t2);}

C_noret_decl(trf_5160)
static void C_fcall trf_5160(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5160(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5160(t0,t1);}

C_noret_decl(trf_4992)
static void C_fcall trf_4992(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4992(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4992(t0,t1,t2);}

C_noret_decl(trf_5352)
static void C_fcall trf_5352(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5352(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5352(t0,t1);}

C_noret_decl(trf_5357)
static void C_fcall trf_5357(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5357(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5357(t0,t1,t2);}

C_noret_decl(trf_2732)
static void C_fcall trf_2732(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2732(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2732(t0,t1,t2);}

C_noret_decl(trf_2910)
static void C_fcall trf_2910(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2910(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2910(t0,t1,t2,t3);}

C_noret_decl(trf_4880)
static void C_fcall trf_4880(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4880(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4880(t0,t1,t2,t3);}

C_noret_decl(trf_4816)
static void C_fcall trf_4816(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4816(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4816(t0,t1,t2,t3);}

C_noret_decl(trf_5307)
static void C_fcall trf_5307(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5307(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5307(t0,t1);}

C_noret_decl(trf_5311)
static void C_fcall trf_5311(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5311(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5311(t0,t1);}

C_noret_decl(trf_3282)
static void C_fcall trf_3282(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3282(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3282(t0,t1,t2,t3);}

C_noret_decl(trf_5053)
static void C_fcall trf_5053(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5053(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5053(t0,t1,t2);}

C_noret_decl(trf_4276)
static void C_fcall trf_4276(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4276(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4276(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5013)
static void C_fcall trf_5013(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5013(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5013(t0,t1);}

C_noret_decl(trf_6066)
static void C_fcall trf_6066(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6066(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6066(t0,t1);}

C_noret_decl(trf_2088)
static void C_fcall trf_2088(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2088(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2088(t0,t1,t2);}

C_noret_decl(trf_4551)
static void C_fcall trf_4551(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4551(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4551(t0,t1,t2,t3);}

C_noret_decl(trf_4203)
static void C_fcall trf_4203(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4203(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4203(t0,t1);}

C_noret_decl(trf_4597)
static void C_fcall trf_4597(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4597(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4597(t0,t1,t2,t3);}

C_noret_decl(trf_5900)
static void C_fcall trf_5900(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5900(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5900(t0,t1,t2);}

C_noret_decl(trf_5822)
static void C_fcall trf_5822(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5822(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5822(t0,t1,t2);}

C_noret_decl(trf_4059)
static void C_fcall trf_4059(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4059(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4059(t0,t1,t2);}

C_noret_decl(trf_3522)
static void C_fcall trf_3522(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3522(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3522(t0,t1,t2);}

C_noret_decl(trf_3585)
static void C_fcall trf_3585(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3585(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3585(t0,t1);}

C_noret_decl(trf_3595)
static void C_fcall trf_3595(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3595(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3595(t0,t1,t2,t3);}

C_noret_decl(trf_3253)
static void C_fcall trf_3253(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3253(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3253(t0,t1,t2);}

C_noret_decl(trf_5605)
static void C_fcall trf_5605(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5605(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5605(t0,t1);}

C_noret_decl(trf_3992)
static void C_fcall trf_3992(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3992(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3992(t0,t1,t2);}

C_noret_decl(trf_5802)
static void C_fcall trf_5802(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5802(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5802(t0,t1,t2);}

C_noret_decl(trf_2459)
static void C_fcall trf_2459(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2459(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2459(t0,t1,t2);}

C_noret_decl(trf_4331)
static void C_fcall trf_4331(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4331(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4331(t0,t1,t2,t3);}

C_noret_decl(trf_4303)
static void C_fcall trf_4303(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4303(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4303(t0,t1,t2);}

C_noret_decl(trf_2992)
static void C_fcall trf_2992(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2992(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2992(t0,t1);}

C_noret_decl(trf_2138)
static void C_fcall trf_2138(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2138(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2138(t0,t1);}

C_noret_decl(trf_4377)
static void C_fcall trf_4377(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4377(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4377(t0,t1,t2,t3);}

C_noret_decl(trf_5252)
static void C_fcall trf_5252(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5252(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5252(t0,t1,t2);}

C_noret_decl(trf_4986)
static void C_fcall trf_4986(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4986(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4986(t0,t1);}

C_noret_decl(trf_4952)
static void C_fcall trf_4952(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4952(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4952(t0,t1,t2);}

C_noret_decl(trf_1856)
static void C_fcall trf_1856(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1856(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1856(t0,t1);}

C_noret_decl(trf_2180)
static void C_fcall trf_2180(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2180(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2180(t0,t1,t2);}

C_noret_decl(trf_2852)
static void C_fcall trf_2852(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2852(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2852(t0,t1,t2);}

C_noret_decl(tr5)
static void C_fcall tr5(C_proc5 k) C_regparm C_noret;
C_regparm static void C_fcall tr5(C_proc5 k){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
(k)(5,t0,t1,t2,t3,t4);}

C_noret_decl(tr6)
static void C_fcall tr6(C_proc6 k) C_regparm C_noret;
C_regparm static void C_fcall tr6(C_proc6 k){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
(k)(6,t0,t1,t2,t3,t4,t5);}

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

C_noret_decl(tr4r)
static void C_fcall tr4r(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4r(C_proc4 k){
int n;
C_word *a,t4;
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
n=C_rest_count(0);
a=C_alloc(n*3);
t4=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4);}

C_noret_decl(tr3r)
static void C_fcall tr3r(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3r(C_proc3 k){
int n;
C_word *a,t3;
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
n=C_rest_count(0);
a=C_alloc(n*3);
t3=C_restore_rest(a,n);
(k)(t0,t1,t2,t3);}

C_noret_decl(tr2r)
static void C_fcall tr2r(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2r(C_proc2 k){
int n;
C_word *a,t2;
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
n=C_rest_count(0);
a=C_alloc(n*3);
t2=C_restore_rest(a,n);
(k)(t0,t1,t2);}

/* k3714 in k3690 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3716,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:672: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_symbol_proc(lf[206]))(4,*((C_word*)lf[206]+1),t2,((C_word*)t0)[2],C_fix(0));}
else{
if(C_truep(C_anypointerp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3820,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:685: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_symbol_proc(lf[206]))(4,*((C_word*)lf[206]+1),t2,((C_word*)t0)[2],C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3826,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:686: ##sys#bytevector? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[242]+1)))(3,*((C_word*)lf[242]+1),t2,((C_word*)t0)[2]);}}}

/* f_2803 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2803(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2803r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2803r(t0,t1,t2);}}

static void C_ccall f_2803r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2806,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:421: history-add */
t4=C_fast_retrieve(lf[46]);
f_2130(3,t4,t3,t2);}

/* f_3971 in loop in k3937 */
static void C_ccall f_3971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3971,2,t0,t1);}
t2=C_i_cdar(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
/* csi.scm:718: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,((C_word*)t0)[3],lf[234],t2,t3);}

/* k3706 in k3690 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:664: fprintf */
t2=*((C_word*)lf[160]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[209],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t1);}

/* k2805 */
static void C_ccall f_2806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_1849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1849,2,t0,t1);}
t2=C_mutate((C_word*)lf[6]+1 /* (set! editor-command ...) */,t1);
t3=lf[7] /* selected-frame */ =C_SCHEME_FALSE;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1853,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:75: get-environment-variable */
t5=C_fast_retrieve(lf[42]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[406]);}

/* k3965 in loop in k3937 */
static void C_ccall f_3966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:719: newline */
t2=*((C_word*)lf[22]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k4169 in k4162 */
static void C_ccall f_4170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:748: hexdump */
t2=C_fast_retrieve(lf[222]);
f_4272(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,*((C_word*)lf[223]+1),((C_word*)t0)[4]);}

/* k5234 in k5223 in k5603 in k5601 in k5347 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in ... */
static void C_ccall f_5235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5235,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5241,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1021: file-exists? */
t3=C_fast_retrieve(lf[33]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k3954 in loop in k3937 */
static void C_ccall f_3955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cddr(((C_word*)t0)[2]);
/* csi.scm:720: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3946(t3,((C_word*)t0)[4],t2);}

/* k5223 in k5603 in k5601 in k5347 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in ... */
static void C_ccall f_5224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5224,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_i_string_equal_p(t1,lf[310]))){
t2=((C_word*)t0)[2];
f_5350(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5235,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5247,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1020: chop-separator */
t4=C_fast_retrieve(lf[29]);
f_1942(3,t4,t3,t1);}}
else{
t2=((C_word*)t0)[2];
f_5350(2,t2,C_SCHEME_FALSE);}}

/* k4184 in k4162 */
static void C_ccall f_4185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:749: hexdump */
t2=C_fast_retrieve(lf[222]);
f_4272(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,*((C_word*)lf[223]+1),((C_word*)t0)[4]);}

/* k3426 in k3422 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:614: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[134]))(4,*((C_word*)lf[134]+1),((C_word*)t0)[2],C_make_character(10),*((C_word*)lf[51]+1));}

/* k3422 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3423,2,t0,t1);}
t2=C_make_character(C_unfix(((C_word*)t0)[2]));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3428,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[2],C_fix(65536)))){
/* csi.scm:613: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[4],lf[173],t2);}
else{
/* csi.scm:614: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[134]))(4,*((C_word*)lf[134]+1),((C_word*)t0)[3],C_make_character(10),*((C_word*)lf[51]+1));}}

/* member* in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_4934(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4934,NULL,3,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4940,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4940(t7,t1,t3);}

/* k2834 */
static void C_ccall f_2835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2835,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2837,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:456: write */
t3=*((C_word*)lf[185]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],t1);}

/* k2836 in k2834 */
static void C_ccall f_2837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:457: get-output-string */
t2=C_fast_retrieve(lf[365]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* loop in member* in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_4940(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4940,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4952,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_4952(t6,t1,((C_word*)t0)[3]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k5208 */
static void C_ccall f_5209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5209,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k2110 in loop in k2085 in k2079 in k2074 in k2040 in lookup-script-file in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[2];
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[34]))(4,*((C_word*)lf[34]+1),((C_word*)t0)[3],t1,t2);}

/* k2843 in k2841 in k2825 in k6033 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2845,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[237]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2852,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2852(t6,((C_word*)t0)[5],t1);}

/* k2841 in k2825 in k6033 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2842,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2845,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:458: g365 */
t3=t1;
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k5275 in doloop1223 in k5264 in k5258 in evalstring in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in ... */
static void C_ccall f_5276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5276,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5282,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1025: read */
t3=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k5264 in k5258 in evalstring in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in ... */
static void C_ccall f_5265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5265,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5267,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_5267(t5,((C_word*)t0)[4],t1);}

/* doloop1223 in k5264 in k5258 in evalstring in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in ... */
static void C_fcall f_5267(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5267,NULL,3,t0,t1,t2);}
if(C_truep(C_eofp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5276,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5285,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5287,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1027: ##sys#call-with-values */
C_call_with_values(4,0,t4,t5,*((C_word*)lf[277]+1));}}

/* k4416 in doloop740 in doloop732 in k4313 in k4311 in doloop722 in hexdump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4408(t3,((C_word*)t0)[4],t2);}

/* k4118 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:601: fprintf */
t2=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[246],t1);}

/* k3904 in for-each-loop582 in doloop577 in k3854 in k3851 in k3824 in k3714 in k3690 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in ... */
static void C_ccall f_3905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3896(t3,((C_word*)t0)[4],t2);}

/* k4424 in doloop732 in k4313 in k4311 in doloop722 in hexdump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4425,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4428,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4440,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4443,a[2]=((C_word*)t0)[7],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:785: ref */
t5=((C_word*)t0)[8];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[9],((C_word*)t0)[3]);}

/* k4426 in k4424 in doloop732 in k4313 in k4311 in doloop722 in hexdump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_4377(t4,((C_word*)t0)[5],t2,t3);}

/* set-describer! in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4127(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4127,4,t0,t1,t2,t3);}
t4=C_i_check_symbol_2(t2,lf[248]);
/* csi.scm:736: ##sys#hash-table-set! */
((C_proc5)C_fast_retrieve_symbol_proc(lf[249]))(5,*((C_word*)lf[249]+1),t1,C_retrieve2(lf[156],"describer-table"),t2,t3);}

/* k4473 in show-frameinfo in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_4475(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4475,NULL,2,t0,t1);}
t2=C_mutate(&lf[7] /* (set! selected-frame ...) */,t1);
t3=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4483,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4483(t7,((C_word*)t0)[4],((C_word*)t0)[5],t3);}

/* doloop740 in doloop732 in k4313 in k4311 in doloop722 in hexdump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_4408(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4408,NULL,3,t0,t1,t2);}
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4417,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:783: display */
t5=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[255],((C_word*)t0)[3]);}}

/* lp in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static C_word C_fcall f_3173(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_stack_overflow_check;
loop:
if(C_truep(C_i_pairp(t1))){
t3=t1;
t4=C_u_i_cdr(t3);
if(C_truep(C_i_pairp(t4))){
t5=C_u_i_cdr(t4);
t6=C_i_cdr(t2);
t7=C_eqp(t5,t6);
if(C_truep(t7)){
return(t7);}
else{
t9=t5;
t10=t6;
t1=t9;
t2=t10;
goto loop;}}
else{
return(C_SCHEME_FALSE);}}
else{
return(C_SCHEME_FALSE);}}

/* show-frameinfo in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_4451(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4451,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4455,tmp=(C_word)a,a+=2,tmp);
t4=C_fast_retrieve(lf[110]);
t5=(C_truep(C_fast_retrieve(lf[110]))?C_fast_retrieve(lf[110]):C_SCHEME_END_OF_LIST);
t6=C_i_length(t5);
t7=t2;
t8=(C_truep(C_u_i_memq(t7,t5))?t2:C_SCHEME_FALSE);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4475,a[2]=t6,a[3]=t3,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t8)){
t10=t9;
f_4475(t10,t8);}
else{
if(C_truep(C_fixnum_greaterp(t6,C_fix(0)))){
t10=C_fixnum_difference(t6,C_fix(1));
t11=t9;
f_4475(t11,C_i_list_ref(t5,t10));}
else{
t10=t9;
f_4475(t10,C_SCHEME_FALSE);}}}

/* prin1 in show-frameinfo in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_4455(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4455,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4461,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:805: ##sys#with-print-length-limit */
((C_proc4)C_fast_retrieve_symbol_proc(lf[53]))(4,*((C_word*)lf[53]+1),t1,C_fix(100),t3);}

/* loop in k3937 */
static void C_fcall f_3946(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
loop:
a=C_alloc(13);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3946,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3955,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_i_caar(t2);
t5=C_eqp(((C_word*)t0)[3],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3966,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3971,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:715: ##sys#with-print-length-limit */
((C_proc4)C_fast_retrieve_symbol_proc(lf[53]))(4,*((C_word*)lf[53]+1),t6,C_fix(100),t7);}
else{
t6=C_i_cddr(t2);
/* csi.scm:720: loop */
t11=t1;
t12=t6;
t1=t11;
t2=t12;
goto loop;}}}

/* k6189 in k6148 in k6146 in a6142 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_6190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:439: ##sys#find-module */
((C_proc4)C_fast_retrieve_symbol_proc(lf[388]))(4,*((C_word*)lf[388]+1),((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* f_4461 in prin1 in show-frameinfo in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4461,2,t0,t1);}
/* csi.scm:808: ##sys#print */
t2=*((C_word*)lf[52]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[2],C_SCHEME_TRUE,*((C_word*)lf[51]+1));}

/* f_2558 in k2547 */
static void C_ccall f_2558(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_2558r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2558r(t0,t1,t2);}}

static void C_ccall f_2558r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2561,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2567,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:351: ##sys#stop-timer */
t5=*((C_word*)lf[95]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k3937 */
static void C_ccall f_3938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3938,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3946,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_3946(t6,((C_word*)t0)[5],t2);}

/* f_3935 in k3933 in k3824 in k3714 in k3690 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in ... */
static void C_ccall f_3935(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3935,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3938,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:711: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],lf[235],t2);}

/* k3933 in k3824 in k3714 in k3690 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 in ... */
static void C_ccall f_3934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3934,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3935,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=C_i_check_list_2(t3,lf[92]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3992,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_3992(t8,((C_word*)t0)[4],t3);}

/* f_2553 in k2547 */
static void C_ccall f_2553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2553,2,t0,t1);}
/* csi.scm:352: eval */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[3]);}

/* k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3488,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3494,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:623: ##sys#symbol->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[184]))(3,*((C_word*)lf[184]+1),t2,((C_word*)t0)[4]);}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3502,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3574,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:625: ##sys#symbol-has-toplevel-binding? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[197]))(3,*((C_word*)lf[197]+1),t3,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[4];
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3173,tmp=(C_word)a,a+=2,tmp);
t4=f_3173(t2,t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3585,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_3585(t6,t4);}
else{
t6=((C_word*)t0)[4];
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3206,tmp=(C_word)a,a+=2,tmp);
t8=t5;
f_3585(t8,f_3206(t6));}}}}

/* k6177 */
static void C_ccall f_6178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:442: printf */
t2=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[385],((C_word*)((C_word*)t0)[3])[1]);}

/* k3623 in loop-print in k3586 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3624,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[3]);
/* csi.scm:655: loop-print */
t7=((C_word*)((C_word*)t0)[4])[1];
f_3595(t7,((C_word*)t0)[5],t3,t6);}

/* k6170 in k6148 in k6146 in a6142 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_6171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6171,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6175,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:434: g331 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t1);}
else{
/* csi.scm:444: printf */
t2=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],lf[387],((C_word*)((C_word*)t0)[2])[1]);}}

/* f_6175 in k6170 in k6148 in k6146 in a6142 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_6175(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6175,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6178,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:441: ##sys#switch-module */
((C_proc3)C_fast_retrieve_symbol_proc(lf[386]))(3,*((C_word*)lf[386]+1),t3,t2);}

/* k4448 in doloop722 in hexdump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:773: display */
t2=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k4439 in k4424 in doloop732 in k4313 in k4311 in doloop722 in hexdump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:785: display */
t2=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k4442 in k4424 in doloop732 in k4313 in k4311 in doloop722 in hexdump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:785: justify */
f_4276(((C_word*)t0)[3],t1,C_fix(2),C_fix(16),C_make_character(48));}

/* k2571 */
static void C_ccall f_2572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k6156 in k6148 in k6146 in a6142 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_6157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:436: printf */
t2=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[391]);}

/* k2547 */
static void C_ccall f_2548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2548,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2553,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2558,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:351: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[4],t2,t3);}

/* k2539 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2540,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2545,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2569,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:351: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[4],t2,t3);}

/* f_2545 in k2539 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2545,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2548,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:351: ##sys#start-timer */
t3=*((C_word*)lf[96]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3493 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:622: fprintf */
t2=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[183],t1);}

/* k6146 in a6142 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_6147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6147,2,t0,t1);}
t2=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6149,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_stringp(((C_word*)t2)[1]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6200,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:433: ##sys#string->symbol */
((C_proc3)C_fast_retrieve_symbol_proc(lf[392]))(3,*((C_word*)lf[392]+1),t4,((C_word*)t2)[1]);}
else{
t4=t3;
f_6149(t4,C_SCHEME_UNDEFINED);}}

/* k6148 in k6146 in a6142 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_6149(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6149,NULL,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t2)){
if(C_truep(C_i_symbolp(((C_word*)((C_word*)t0)[2])[1]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6171,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6190,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:439: ##sys#resolve-module-name */
((C_proc4)C_fast_retrieve_symbol_proc(lf[389]))(4,*((C_word*)lf[389]+1),t4,((C_word*)((C_word*)t0)[2])[1],C_SCHEME_FALSE);}
else{
/* csi.scm:438: printf */
t3=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],lf[390],((C_word*)((C_word*)t0)[2])[1]);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6157,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:435: ##sys#switch-module */
((C_proc3)C_fast_retrieve_symbol_proc(lf[386]))(3,*((C_word*)lf[386]+1),t3,C_SCHEME_FALSE);}}

/* k4633 in k4631 in k4515 in k4513 in k4511 in k4509 in k4507 in k4505 in k4503 in doloop784 in k4473 in show-frameinfo in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in ... */
static void C_ccall f_4634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:829: display */
t2=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[259],((C_word*)t0)[3]);}

/* k4631 in k4515 in k4513 in k4511 in k4509 in k4507 in k4505 in k4503 in doloop784 in k4473 in show-frameinfo in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in ... */
static void C_ccall f_4632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4632,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4634,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:829: display */
t3=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}

/* a6142 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_6143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6143,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6147,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:431: read */
t3=*((C_word*)lf[75]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3116 in for-each-loop429 in k2977 in k2975 in k2961 in k2959 in k2957 */
static void C_ccall f_3117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3108(t3,((C_word*)t0)[4],t2);}

/* ##sys#sharp-number-hook in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_1921(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1921,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1928,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:169: history-ref */
t5=C_fast_retrieve(lf[26]);
f_2215(3,t5,t4,t3);}

/* k1927 in sharp-number-hook in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_1928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1928,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,lf[24],t1));}

/* k4605 in for-each-loop822 in k4522 in k4520 in k4518 in k4515 in k4513 in k4511 in k4509 in k4507 in k4505 in k4503 in doloop784 in k4473 in show-frameinfo in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in ... */
static void C_ccall f_4606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_4597(t4,((C_word*)t0)[5],t2,t3);}

/* for-each-loop429 in k2977 in k2975 in k2961 in k2959 in k2957 */
static void C_fcall f_3108(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3108,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3117,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:484: g430 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* doloop784 in k4473 in show-frameinfo in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_4483(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4483,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_i_car(t2);
t5=C_eqp(C_retrieve2(lf[7],"selected-frame"),t4);
t6=C_slot(t4,C_fix(1));
t7=C_slot(t4,C_fix(2));
t8=C_i_structurep(t7,lf[113]);
t9=(C_truep(t8)?C_slot(t7,C_fix(1)):t7);
t10=*((C_word*)lf[51]+1);
t11=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4504,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t5,a[7]=t8,a[8]=((C_word*)t0)[3],a[9]=t7,a[10]=t6,a[11]=t9,a[12]=t10,a[13]=t4,tmp=(C_word)a,a+=14,tmp);
if(C_truep(t5)){
/* csi.scm:815: display */
t12=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t11,C_make_character(42),*((C_word*)lf[51]+1));}
else{
/* csi.scm:815: display */
t12=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t11,C_make_character(32),t10);}}}

/* f_5537 in doloop1353 in k5351 in k5349 in k5347 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in ... */
static void C_ccall f_5537(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5537,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5541,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5584,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1115: with-output-to-string */
t5=C_fast_retrieve(lf[308]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* dirseparator? in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_1930(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1930,3,t0,t1,t2);}
t3=C_i_char_equalp(t2,C_make_character(92));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t3:C_i_char_equalp(t2,C_make_character(47))));}

/* k2585 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:358: describe */
t2=C_fast_retrieve(lf[78]);
f_3235(3,t2,((C_word*)t0)[2],C_fast_retrieve(lf[98]));}

/* k1909 in user-read-hook in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_1910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1910,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,lf[24],t1));}

/* k6105 in k6075 in k6064 */
static void C_ccall f_6106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6106,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_cons(&a,2,lf[375],t3);
t5=C_a_i_cons(&a,2,t1,t4);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6091,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:916: rename1001 */
t7=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,t6,lf[376]);}

/* f_5584 */
static void C_ccall f_5584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5584,2,t0,t1);}
t2=C_fast_retrieve(lf[69]);
/* csi.scm:1115: g1406 */
t3=C_fast_retrieve(lf[69]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,((C_word*)t0)[2]);}

/* k5706 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in ... */
static void C_ccall f_5707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5707,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[237]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5712,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5752,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5752(t7,t3,t1);}

/* k4644 in k4507 in k4505 in k4503 in doloop784 in k4473 in show-frameinfo in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_4646(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* csi.scm:815: display */
t2=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[261],((C_word*)t0)[3]);}
else{
/* csi.scm:815: display */
t2=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[262],((C_word*)t0)[3]);}}

/* k5703 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in ... */
static void C_ccall f_5704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1055: ##sys#nodups */
((C_proc4)C_fast_retrieve_symbol_proc(lf[331]))(4,*((C_word*)lf[331]+1),((C_word*)t0)[2],t1,*((C_word*)lf[332]+1));}

/* k2519 in for-each-loop254 in k2487 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2511(t3,((C_word*)t0)[4],t2);}

/* k3690 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3692,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=(C_truep(t2)?lf[207]:lf[208]);
t4=C_slot(((C_word*)t0)[2],C_fix(7));
t5=C_slot(((C_word*)t0)[2],C_fix(3));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3707,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* csi.scm:669: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_symbol_proc(lf[206]))(4,*((C_word*)lf[206]+1),t6,((C_word*)t0)[2],C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3716,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:670: ##sys#locative? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[243]))(3,*((C_word*)lf[243]+1),t2,((C_word*)t0)[2]);}}

/* f_4761 in k4731 in k2683 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4761(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4761,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4764,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4781,a[2]=t3,a[3]=t5,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_4781(t7,t1,((C_word*)t0)[4]);}

/* fail */
static void C_fcall f_4764(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4764,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4768,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:883: display */
t4=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4767 in fail */
static void C_ccall f_4768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4768,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4770,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:884: newline */
t3=*((C_word*)lf[22]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5566 in doloop1409 in k5546 in k5544 in k5540 */
static void C_ccall f_5567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5567,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5570,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_char_equalp(C_make_character(10),((C_word*)t0)[5]))){
/* csi.scm:1124: display */
t3=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[305],*((C_word*)lf[304]+1));}
else{
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_5556(t4,((C_word*)t0)[4],t3);}}

/* k2363 in k2355 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:319: pretty-print */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k3685 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:661: sprintf */
t2=*((C_word*)lf[204]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[205],t1);}

/* k3682 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:660: descseq */
t2=((C_word*)t0)[2];
f_3242(6,t2,((C_word*)t0)[3],t1,*((C_word*)lf[180]+1),*((C_word*)lf[182]+1),C_fix(1));}

/* k2355 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2356,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2358,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2364,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2367,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:319: expand */
t5=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t1);}

/* k2357 in k2355 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* compare in k4731 in k2683 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_4734(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4734,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4744,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=C_i_string_length(((C_word*)t0)[2]);
t6=C_i_string_length(t3);
t7=C_i_fixnum_min(t5,t6);
/* csi.scm:878: substring */
t8=*((C_word*)lf[30]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t4,t3,C_fix(0),t7);}

/* k4731 in k2683 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_4732(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4732,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4734,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4761,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:880: call/cc */
t4=*((C_word*)lf[116]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[3],t3);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,*((C_word*)lf[47]+1));}}

/* doloop1409 in k5546 in k5544 in k5540 */
static void C_fcall f_5556(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5556,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_string_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5567,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t5=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,*((C_word*)lf[304]+1));}}

/* k5550 in k5548 in k5546 in k5544 in k5540 */
static void C_ccall f_5551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1126: eval */
t2=C_fast_retrieve(lf[65]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2374 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2375,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2377,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:323: eval */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k2366 in k2355 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:319: ##sys#strip-syntax */
((C_proc3)C_fast_retrieve_symbol_proc(lf[74]))(3,*((C_word*)lf[74]+1),((C_word*)t0)[2],t1);}

/* k4743 in compare in k4731 in k2683 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_string_equal_p(((C_word*)t0)[3],t1));}

/* for-each-loop254 in k2487 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_2511(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2511,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2520,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:347: g255 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5548 in k5546 in k5544 in k5540 */
static void C_ccall f_5549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5549,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5551,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1125: newline */
t3=*((C_word*)lf[22]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,*((C_word*)lf[304]+1));}

/* k5544 in k5540 */
static void C_ccall f_5545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5545,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5547,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:1118: display */
t3=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[306],*((C_word*)lf[304]+1));}

/* k2566 */
static void C_ccall f_2567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:351: ##sys#display-times */
((C_proc3)C_fast_retrieve_symbol_proc(lf[94]))(3,*((C_word*)lf[94]+1),((C_word*)t0)[2],t1);}

/* k5546 in k5544 in k5540 */
static void C_ccall f_5547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5547,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5549,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5556,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5556(t6,t2,C_fix(0));}

/* f_2569 in k2539 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2569(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2569r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2569r(t0,t1,t2);}}

static void C_ccall f_2569r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2572,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:353: history-add */
t4=C_fast_retrieve(lf[46]);
f_2130(3,t4,t3,t2);}

/* k5540 */
static void C_ccall f_5541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5541,2,t0,t1);}
t2=C_i_string_length(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5545,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:1117: flush-output */
t4=*((C_word*)lf[307]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[51]+1));}

/* k2378 in k2376 in k2374 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k4681 in k2671 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_4683(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_truep(t1)){
/* csi.scm:853: display */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[109]);}
else{
t2=C_i_length(C_fast_retrieve(lf[110]));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=C_fixnum_difference(t2,t3);
t5=C_i_list_ref(C_fast_retrieve(lf[110]),t4);
t6=C_mutate(&lf[7] /* (set! selected-frame ...) */,t5);
/* csi.scm:859: show-frameinfo */
f_4451(((C_word*)t0)[2],C_retrieve2(lf[7],"selected-frame"));}}

/* k2376 in k2374 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2377,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2379,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:324: pretty-print */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k2560 */
static void C_ccall f_2561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2391 in k2389 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:329: describe */
t2=C_fast_retrieve(lf[78]);
f_3235(3,t2,((C_word*)t0)[2],t1);}

/* k2389 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2390,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2392,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:328: eval */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k2531 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:347: string-split */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* addext in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_1988(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1988,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1995,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:195: file-exists? */
t4=C_fast_retrieve(lf[33]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k5718 in k5714 in k5710 in k5706 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in ... */
static void C_ccall f_5720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1056: append */
t2=*((C_word*)lf[238]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,C_fast_retrieve(lf[142]),((C_word*)t0)[4]);}

/* map-loop1314 in k5714 in k5710 in k5706 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in ... */
static void C_fcall f_5722(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5722,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5747,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1057: g1320 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4769 in k4767 in fail */
static void C_ccall f_4770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=*((C_word*)lf[47]+1);
/* csi.scm:885: return */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,((C_word*)t0)[3],*((C_word*)lf[47]+1));}

/* k2504 in k2487 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k1996 in k1993 in addext in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_1997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1997,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2003,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:198: file-exists? */
t3=C_fast_retrieve(lf[33]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k1993 in addext in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_1995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1995,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1997,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[34]))(4,*((C_word*)lf[34]+1),t2,t3,lf[35]);}}

/* f_5510 in k5489 in doloop1353 in k5351 in k5349 in k5347 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in ... */
static void C_ccall f_5510(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_5510r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5510r(t0,t1,t2);}}

static void C_ccall f_5510r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
if(C_truep(C_fixnump(t4))){
t5=C_i_car(t2);
/* csi.scm:1131: exit */
t6=C_fast_retrieve(lf[72]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,t5);}
else{
/* csi.scm:1131: exit */
t5=C_fast_retrieve(lf[72]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,C_fix(0));}}
else{
/* csi.scm:1131: exit */
t3=C_fast_retrieve(lf[72]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,C_fix(0));}}

/* k5710 in k5706 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in ... */
static void C_ccall f_5712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5712,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_fast_retrieve(lf[29]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5715,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=t3,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
/* csi.scm:1057: collect-options */
t8=((C_word*)((C_word*)t0)[4])[1];
f_5177(t8,t7,lf[333]);}

/* k5714 in k5710 in k5706 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in ... */
static void C_ccall f_5715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5715,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[237]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5720,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5722,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5722(t7,t3,t1);}

/* k4162 */
static void C_ccall f_4164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4164,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4170,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[3]);
/* csi.scm:748: bestlen */
t4=((C_word*)t0)[5];
f_4142(t4,t2,t3);}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4185,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[3]);
/* csi.scm:749: bestlen */
t4=((C_word*)t0)[5];
f_4142(t4,t2,t3);}
else{
t2=C_immp(((C_word*)t0)[3]);
t3=(C_truep(t2)?C_SCHEME_FALSE:C_anypointerp(((C_word*)t0)[3]));
if(C_truep(t3)){
/* csi.scm:751: hexdump */
t4=C_fast_retrieve(lf[222]);
f_4272(6,t4,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(32),*((C_word*)lf[253]+1),((C_word*)t0)[4]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4203,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_structurep(((C_word*)t0)[3]))){
t5=C_slot(((C_word*)t0)[3],C_fix(0));
t6=t4;
f_4203(t6,C_i_assq(t5,C_retrieve2(lf[154],"##csi#bytevector-data")));}
else{
t5=t4;
f_4203(t5,C_SCHEME_FALSE);}}}}}

/* f6730 in k2618 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f6730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:361: string-append */
t2=*((C_word*)lf[37]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[103],t1);}

/* doloop906 */
static void C_fcall f_4781(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word *a;
loop:
a=C_alloc(20);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4781,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
/* csi.scm:887: fail */
t3=((C_word*)t0)[2];
f_4764(t3,t1,lf[112]);}
else{
t3=C_i_car(t2);
t4=C_eqp(C_retrieve2(lf[7],"selected-frame"),t3);
t5=C_slot(t3,C_fix(2));
t6=C_i_structurep(t5,lf[113]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4802,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=(C_truep(t4)?t6:C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4811,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t10=C_slot(t5,C_fix(2));
t11=C_slot(t5,C_fix(3));
t12=C_i_check_list_2(t10,lf[92]);
t13=C_i_check_list_2(t11,lf[92]);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4872,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4880,a[2]=t16,a[3]=t9,tmp=(C_word)a,a+=4,tmp));
t18=((C_word*)t16)[1];
f_4880(t18,t14,t10,t11);}
else{
t9=t2;
t10=C_u_i_cdr(t9);
t21=t1;
t22=t10;
t1=t21;
t2=t22;
goto loop;}}}

/* f6734 in k2618 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f6734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:361: string-append */
t2=*((C_word*)lf[37]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],C_retrieve2(lf[8],"default-editor"),lf[103],t1);}

/* f_5501 in k5489 in doloop1353 in k5351 in k5349 in k5347 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in ... */
static void C_ccall f_5501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5501,2,t0,t1);}
t2=C_fast_retrieve(lf[301]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5508,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1129: command-line-arguments */
t4=C_fast_retrieve(lf[302]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k5507 */
static void C_ccall f_5508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1129: g1423 */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* for-each-loop1271 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in ... */
static void C_fcall f_5782(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5782,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5791,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1053: g1272 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_4139 in dump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4139(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4139,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4142,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_immp(((C_word*)t0)[2]))){
/* csi.scm:747: ##sys#error */
t5=*((C_word*)lf[56]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,lf[251],lf[252],((C_word*)t0)[2]);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4164,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:748: ##sys#bytevector? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[242]+1)))(3,*((C_word*)lf[242]+1),t5,((C_word*)t0)[2]);}}

/* ##csi#dump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4136(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_4136r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4136r(t0,t1,t2,t3);}}

static void C_ccall f_4136r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4139,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4236,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4240,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t3))){
/* csi.scm:742: def-len688 */
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t1);}
else{
t7=C_i_car(t3);
t8=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t8))){
/* csi.scm:742: def-out689 */
t9=t5;
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t1,t7);}
else{
t9=C_i_car(t8);
t10=C_u_i_cdr(t8);
/* csi.scm:742: body686 */
t11=t4;
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,t7,t9);}}}

/* f_1971 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_1971(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1971,4,t0,t1,t2,t3);}
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_truep(t2)?C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t6=C_i_foreign_fixnum_argumentp(t3);
t7=stub75(t4,t5,t6);
/* csi.scm:193: ##sys#peek-nonnull-c-string */
t8=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t1,t7,C_fix(0));}

/* k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_1970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word ab[56],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1970,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1971,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1988,tmp=(C_word)a,a+=2,tmp);
t4=C_mutate((C_word*)lf[36]+1 /* (set! ##csi#lookup-script-file ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2037,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp));
t5=C_SCHEME_UNDEFINED;
t6=C_a_i_vector(&a,32,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5);
t7=C_mutate((C_word*)lf[44]+1 /* (set! ##csi#history-list ...) */,t6);
t8=C_set_block_item(lf[25] /* ##csi#history-count */,0,C_fix(1));
t9=C_fast_retrieve(lf[45]);
t10=C_mutate((C_word*)lf[46]+1 /* (set! ##csi#history-add ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2130,a[2]=t9,tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[48]+1 /* (set! ##csi#history-clear ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2165,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[50]+1 /* (set! ##csi#history-show ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2174,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[26]+1 /* (set! ##csi#history-ref ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2215,tmp=(C_word)a,a+=2,tmp));
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2239,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t15=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6202,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:259: repl-prompt */
t16=C_fast_retrieve(lf[400]);
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t14,t15);}

/* k5568 in k5566 in doloop1409 in k5546 in k5544 in k5540 */
static void C_ccall f_5570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5556(t3,((C_word*)t0)[4],t2);}

/* k5776 in map-loop1288 in k5706 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in ... */
static void C_ccall f_5777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5777,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5752(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5752(t6,((C_word*)t0)[5],t5);}}

/* bestlen */
static void C_fcall f_4142(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4142,NULL,3,t0,t1,t2);}
if(C_truep(((C_word*)t0)[2])){
/* csi.scm:746: min */
t3=*((C_word*)lf[250]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,((C_word*)t0)[2],t2);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##csi#chop-separator in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_1942(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1942,3,t0,t1,t2);}
t3=C_block_size(t2);
t4=C_a_i_minus(&a,2,t3,C_fix(1));
t5=C_i_string_ref(t2,t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1954,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnum_greaterp(t4,C_fix(0)))){
t7=C_i_char_equalp(t5,C_make_character(92));
t8=t6;
f_1954(t8,(C_truep(t7)?t7:C_i_char_equalp(t5,C_make_character(47))));}
else{
t7=t6;
f_1954(t7,C_SCHEME_FALSE);}}

/* k1952 in chop-separator in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_1954(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* csi.scm:183: substring */
t2=*((C_word*)lf[30]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* map-loop1288 in k5706 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in ... */
static void C_fcall f_5752(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5752,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5777,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1056: g1294 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_2936 */
static void C_ccall f_2936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2936,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* f_2931 */
static void C_ccall f_2931(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_2931r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2931r(t0,t1,t2);}}

static void C_ccall f_2931r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2936,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:458: k361 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2312(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2312,3,t0,t1,t2);}
if(C_truep(C_eofp(t2))){
/* csi.scm:306: exit */
t3=C_fast_retrieve(lf[72]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2328,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(0));
t5=t3;
f_2328(t5,C_eqp(lf[123],t4));}
else{
t4=t3;
f_2328(t4,C_SCHEME_FALSE);}}}

/* ##csi#report in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2946(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_2946r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2946r(t0,t1,t2);}}

static void C_ccall f_2946r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2953,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=t3;
f_2953(t5,C_u_i_car(t4));}
else{
t4=t3;
f_2953(t4,*((C_word*)lf[51]+1));}}

/* k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2945,2,t0,t1);}
t2=C_mutate((C_word*)lf[83]+1 /* (set! ##csi#report ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2946,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t3=C_mutate(&lf[154] /* (set! ##csi#bytevector-data ...) */,lf[155]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3233,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:567: make-vector */
t5=*((C_word*)lf[382]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_fix(37),C_SCHEME_END_OF_LIST);}

/* k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2942,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2945,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_2945(2,t3,t1);}
else{
/* ##sys#peek-c-string */
t3=*((C_word*)lf[383]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_INSTALL_PREFIX),C_fix(0));}}

/* k2957 */
static void C_ccall f_2958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2958,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2960,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:480: ##sys#symbol-table-info */
((C_proc2)C_fast_retrieve_symbol_proc(lf[152]))(2,*((C_word*)lf[152]+1),t2);}

/* k2952 in report in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_2953(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2953,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2955,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:477: with-output-to-port */
t3=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[6],t1,t2);}

/* f_2955 in k2952 in report in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2955,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2958,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:479: gc */
t3=C_fast_retrieve(lf[153]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_2336 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2336(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2336,3,t0,t1,t2);}
t3=C_i_cadr(t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2342,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:311: g211 */
t5=t3;
((C_proc2)C_fast_retrieve_proc(t5))(2,t5,t4);}

/* k5790 in for-each-loop1271 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in ... */
static void C_ccall f_5791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5782(t3,((C_word*)t0)[4],t2);}

/* k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_2328(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2328,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_assq(t2,C_retrieve2(lf[63],"command-table"));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2336,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:309: g208 */
t5=t4;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,((C_word*)t0)[3],t3);}
else{
t4=C_eqp(t2,lf[73]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2356,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:318: read */
t6=*((C_word*)lf[75]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_eqp(t2,lf[76]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2375,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:322: read */
t7=*((C_word*)lf[75]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_eqp(t2,lf[77]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2390,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:327: read */
t8=*((C_word*)lf[75]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=C_eqp(t2,lf[79]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2403,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:331: read */
t9=*((C_word*)lf[75]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=C_eqp(t2,lf[81]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2416,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:335: read */
t10=*((C_word*)lf[75]+1);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=C_eqp(t2,lf[82]);
if(C_truep(t9)){
/* csi.scm:340: report */
t10=C_fast_retrieve(lf[83]);
f_2946(2,t10,((C_word*)t0)[3]);}
else{
t10=C_eqp(t2,lf[84]);
if(C_truep(t10)){
/* csi.scm:341: ##sys#quit-hook */
t11=C_fast_retrieve(lf[85]);
f_5377(2,t11,((C_word*)t0)[3]);}
else{
t11=C_eqp(t2,lf[86]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2451,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2480,a[2]=((C_word*)t0)[7],a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:343: read-line */
t14=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,t13);}
else{
t12=C_eqp(t2,lf[88]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2488,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2532,a[2]=((C_word*)t0)[7],a[3]=t13,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:347: read-line */
t15=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,t14);}
else{
t13=C_eqp(t2,lf[93]);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2540,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:351: read */
t15=*((C_word*)lf[75]+1);
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,t14);}
else{
t14=C_eqp(t2,lf[97]);
if(C_truep(t14)){
if(C_truep(C_fast_retrieve(lf[98]))){
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2586,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t16=C_a_i_list1(&a,1,C_fast_retrieve(lf[98]));
/* csi.scm:357: history-add */
t17=C_fast_retrieve(lf[46]);
f_2130(3,t17,t15,t16);}
else{
t15=C_SCHEME_UNDEFINED;
t16=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,t15);}}
else{
t15=C_eqp(t2,lf[99]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2600,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2616,a[2]=t16,tmp=(C_word)a,a+=3,tmp);
t18=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2619,a[2]=t17,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:362: editor-command */
t19=C_fast_retrieve(lf[6]);
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,t18);}
else{
t16=C_eqp(t2,lf[104]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2633,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t18=*((C_word*)lf[47]+1);
/* csi.scm:239: vector-fill! */
t19=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t19+1)))(4,t19,t17,C_fast_retrieve(lf[44]),*((C_word*)lf[47]+1));}
else{
t17=C_eqp(t2,lf[105]);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2644,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:370: history-show */
t19=C_fast_retrieve(lf[50]);
f_2174(2,t19,t18);}
else{
t18=C_eqp(t2,lf[106]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2655,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:373: show-frameinfo */
f_4451(t19,C_retrieve2(lf[7],"selected-frame"));}
else{
t19=C_eqp(t2,lf[108]);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2666,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2672,a[2]=t20,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:376: read */
t22=*((C_word*)lf[75]+1);
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,t21);}
else{
t20=C_eqp(t2,lf[111]);
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2684,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:379: read */
t22=*((C_word*)lf[75]+1);
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,t21);}
else{
t21=C_eqp(t2,lf[118]);
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2692,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:381: read-line */
t23=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t23+1)))(2,t23,t22);}
else{
t22=C_eqp(t2,lf[119]);
if(C_truep(t22)){
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2707,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:386: display */
t24=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t24+1)))(3,t24,t23,lf[121]);}
else{
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2752,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:417: printf */
t24=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t24+1)))(4,t24,t23,lf[122],((C_word*)t0)[2]);}}}}}}}}}}}}}}}}}}}}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2798,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2803,a[2]=((C_word*)t0)[10],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:420: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],t2,t3);}}

/* k3156 in map-loop403 in k2975 in k2961 in k2959 in k2957 */
static void C_ccall f_3157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3157,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3132(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3132(t6,((C_word*)t0)[5],t5);}}

/* k2961 in k2959 in k2957 */
static void C_ccall f_2962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2962,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2964,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2976,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* csi.scm:483: printf */
t4=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[150]);}

/* k2959 in k2957 */
static void C_ccall f_2960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2960,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2962,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:481: memory-statistics */
t3=C_fast_retrieve(lf[151]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* shorten in k2961 in k2959 in k2957 */
static void C_fcall f_2964(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2964,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2971,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_times(&a,2,t2,C_fix(100));
/* csi.scm:482: truncate */
t5=*((C_word*)lf[128]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k2977 in k2975 in k2961 in k2959 in k2957 */
static void C_ccall f_2978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2978,2,t0,t1);}
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2979,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_check_list_2(t1,lf[92]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3023,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3108,a[2]=t8,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_3108(t10,t6,t1);}

/* f_2979 in k2977 in k2975 in k2961 in k2959 in k2957 */
static void C_ccall f_2979(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2979,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2982,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:488: printf */
t4=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[131],t2);}

/* k2340 */
static void C_ccall f_2342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k2970 in shorten in k2961 in k2959 in k2957 */
static void C_ccall f_2971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2971,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_divide(&a,2,t1,C_fix(100)));}

/* k2975 in k2961 in k2959 in k2957 */
static void C_ccall f_2976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2976,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2978,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_fast_retrieve(lf[148]);
t8=C_fast_retrieve(lf[4]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3130,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3132,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_3132(t13,t9,C_fast_retrieve(lf[4]));}

/* map-loop403 in k2975 in k2961 in k2959 in k2957 */
static void C_fcall f_3132(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3132,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3157,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:484: g409 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3128 in k2975 in k2961 in k2959 in k2957 */
static void C_ccall f_3130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:484: sort */
t2=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,*((C_word*)lf[149]+1));}

/* k2981 */
static void C_ccall f_2982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2982,2,t0,t1);}
t2=C_i_string_length(((C_word*)t0)[2]);
t3=C_a_i_minus(&a,2,C_fix(16),t2);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2992,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_less_or_equalp(((C_word*)t4)[1],C_fix(0)))){
t8=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t9=C_mutate(((C_word *)((C_word*)t0)[3])+1,t8);
t10=C_a_i_plus(&a,2,((C_word*)t4)[1],C_fix(18));
t11=C_set_block_item(t4,0,t10);
t12=t7;
f_2992(t12,t11);}
else{
t8=t7;
f_2992(t8,C_SCHEME_UNDEFINED);}}

/* doloop577 in k3854 in k3851 in k3824 in k3714 in k3690 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in ... */
static void C_fcall f_3864(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3864,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3872,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(((C_word*)t0)[4],t2);
t5=C_i_check_list_2(t4,lf[92]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3888,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3896,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_3896(t10,t6,t4);}}

/* k3854 in k3851 in k3824 in k3714 in k3690 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in ... */
static void C_ccall f_3855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3855,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_block_size(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3864,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3864(t7,((C_word*)t0)[4],C_fix(0));}

/* k3851 in k3824 in k3714 in k3690 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 in ... */
static void C_ccall f_3853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3853,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3855,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(4));
/* csi.scm:696: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[3],lf[229],t3);}

/* k5746 in map-loop1314 in k5714 in k5710 in k5706 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in ... */
static void C_ccall f_5747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5747,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5722(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5722(t6,((C_word*)t0)[5],t5);}}

/* k3841 in k3824 in k3714 in k3690 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 in ... */
static void C_ccall f_3842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:691: fprintf */
t2=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[225],t1);}

/* f_5191 in loop in collect-options in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in ... */
static void C_ccall f_5191(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5191,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
/* csi.scm:1014: ##sys#error */
t4=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,lf[276],((C_word*)t0)[2]);}
else{
t4=C_i_cadr(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5209,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
/* csi.scm:1015: loop */
t9=((C_word*)((C_word*)t0)[3])[1];
f_5183(t9,t5,t8);}}

/* k3829 in k3824 in k3714 in k3690 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 in ... */
static void C_ccall f_3830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:689: hexdump */
t2=C_fast_retrieve(lf[222]);
f_4272(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],*((C_word*)lf[223]+1),((C_word*)t0)[5]);}

/* loop in collect-options in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in ... */
static void C_fcall f_5183(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5183,NULL,3,t0,t1,t2);}
t3=C_i_member(((C_word*)t0)[2],t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5191,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1001: g1203 */
t5=t4;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}}

/* k4834 in doloop934 */
static void C_ccall f_4836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4836,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4838,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:900: display */
t3=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[114]);}
else{
t2=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t3=((C_word*)t0)[6];
t4=C_u_i_cdr(t3);
t5=((C_word*)((C_word*)t0)[7])[1];
f_4816(t5,((C_word*)t0)[8],t2,t4);}}

/* k4837 in k4834 in doloop934 */
static void C_ccall f_4838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4838,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4840,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[6];
t4=C_u_i_car(t3);
/* csi.scm:901: display */
t5=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,t4);}

/* k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in ... */
static void C_ccall f_5175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5175,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5177,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp));
t7=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5252,tmp=(C_word)a,a+=2,tmp));
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5303,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t1,a[11]=t3,tmp=(C_word)a,a+=12,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5893,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1028: member* */
f_4934(t9,lf[349],((C_word*)((C_word*)t0)[2])[1]);}

/* k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in ... */
static void C_ccall f_5172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5172,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5175,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5900,a[2]=((C_word*)t0)[9],a[3]=t4,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_5900(t6,t2,t1);}

/* k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in ... */
static void C_ccall f_5344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5344,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5346,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5631,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1073: member* */
f_4934(t3,lf[322],((C_word*)((C_word*)t0)[6])[1]);}

/* k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in ... */
static void C_ccall f_5342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5342,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5344,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5642,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1070: member* */
f_4934(t3,lf[324],((C_word*)((C_word*)t0)[6])[1]);}

/* collect-options in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in ... */
static void C_fcall f_5177(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5177,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5183,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_5183(t6,t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k5347 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in ... */
static void C_ccall f_5348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5348,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5350,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5602,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:1082: member* */
f_4934(t3,lf[313],((C_word*)((C_word*)t0)[6])[1]);}

/* k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in ... */
static void C_ccall f_5346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5346,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5348,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5614,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1076: member* */
f_4934(t3,lf[320],((C_word*)((C_word*)t0)[6])[1]);}

/* k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in ... */
static void C_fcall f_5170(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5170,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_fast_retrieve(lf[29]);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5172,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=t5,a[10]=t3,a[11]=t6,tmp=(C_word)a,a+=12,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5931,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1007: get-environment-variable */
t9=C_fast_retrieve(lf[42]);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,lf[352]);}

/* k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in ... */
static void C_ccall f_5340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5340,2,t0,t1);}
t2=C_mutate((C_word*)lf[142]+1 /* (set! ##sys#include-pathnames ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5342,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[9])){
t4=C_i_cdr(((C_word*)t0)[9]);
if(C_truep(C_i_pairp(t4))){
t5=C_i_cadr(((C_word*)t0)[9]);
if(C_truep(C_i_string_equal_p(lf[325],t5))){
/* csi.scm:1065: keyword-style */
t6=C_fast_retrieve(lf[316]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t3,lf[326]);}
else{
t6=((C_word*)t0)[9];
t7=C_u_i_cdr(t6);
t8=C_u_i_car(t7);
if(C_truep(C_i_string_equal_p(lf[327],t8))){
/* csi.scm:1067: keyword-style */
t9=C_fast_retrieve(lf[316]);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t3,lf[317]);}
else{
t9=((C_word*)t0)[9];
t10=C_u_i_cdr(t9);
t11=C_u_i_car(t10);
if(C_truep(C_i_string_equal_p(lf[328],t11))){
/* csi.scm:1069: keyword-style */
t12=C_fast_retrieve(lf[316]);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t3,lf[329]);}
else{
t12=t3;
f_5342(2,t12,C_SCHEME_UNDEFINED);}}}}
else{
/* csi.scm:1063: ##sys#error */
t5=*((C_word*)lf[56]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,lf[330]);}}
else{
t4=t3;
f_5342(2,t4,C_SCHEME_UNDEFINED);}}

/* k4843 in k4841 in k4839 in k4837 in k4834 in doloop934 */
static void C_ccall f_4844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],((C_word*)t0)[3]);
/* csi.scm:904: return */
t3=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,((C_word*)t0)[5],t2);}

/* k4839 in k4837 in k4834 in doloop934 */
static void C_ccall f_4840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4840,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4842,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:902: newline */
t3=*((C_word*)lf[22]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4841 in k4839 in k4837 in k4834 in doloop934 */
static void C_ccall f_4842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4842,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4844,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_list1(&a,1,t3);
/* csi.scm:903: history-add */
t5=C_fast_retrieve(lf[46]);
f_2130(3,t5,t2,t4);}

/* k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in ... */
static void C_fcall f_5165(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5165,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5167,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:1003: member* */
f_4934(t2,lf[353],((C_word*)((C_word*)t0)[3])[1]);}

/* k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 in ... */
static void C_ccall f_5162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5162,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5165,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_5165(t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5939,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1002: member* */
f_4934(t4,lf[354],((C_word*)((C_word*)t0)[3])[1]);}}

/* for-each-loop582 in doloop577 in k3854 in k3851 in k3824 in k3714 in k3690 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in ... */
static void C_fcall f_3896(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3896,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3905,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:698: g583 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in ... */
static void C_ccall f_5167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5167,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5170,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_5170(t4,t2);}
else{
if(C_truep(t1)){
t4=t1;
t5=t3;
f_5170(t5,t4);}
else{
t4=((C_word*)t0)[6];
t5=t3;
f_5170(t5,t4);}}}

/* f_5374 in doloop1353 in k5351 in k5349 in k5347 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in ... */
static void C_ccall f_5374(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5374,3,t0,t1,t2);}
t3=C_mutate((C_word*)lf[85]+1 /* (set! ##sys#quit-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5377,a[2]=t2,tmp=(C_word)a,a+=3,tmp));
/* csi.scm:1091: repl */
t4=C_fast_retrieve(lf[281]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,C_retrieve2(lf[71],"csi-eval"));}

/* ##sys#quit-hook */
static void C_ccall f_5377(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5377,2,t0,t1);}
/* csi.scm:1090: k */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,C_SCHEME_FALSE);}

/* k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_5160(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5160,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5162,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:1001: member* */
f_4934(t2,lf[355],((C_word*)((C_word*)t0)[3])[1]);}

/* loop in canonicalize-args in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_4992(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4992,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_car(t2);
if(C_truep((C_truep(C_i_equalp(t3,lf[267]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[268]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[269]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[270]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[271]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5013,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_block_size(t3);
if(C_truep(C_fixnum_greaterp(t5,C_fix(2)))){
t6=C_subchar(t3,C_fix(0));
if(C_truep(C_i_char_equalp(C_make_character(45),t6))){
t7=C_i_member(t3,lf[274]);
t8=t4;
f_5013(t8,C_i_not(t7));}
else{
t7=t4;
f_5013(t7,C_SCHEME_FALSE);}}
else{
t6=t4;
f_5013(t6,C_SCHEME_FALSE);}}}}

/* k3886 in doloop577 in k3854 in k3851 in k3824 in k3714 in k3690 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in ... */
static void C_ccall f_3888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3864(t3,((C_word*)t0)[4],t2);}

/* k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_5152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5152,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5154,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6031,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:980: command-line-arguments */
t4=C_fast_retrieve(lf[302]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_5154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5154,2,t0,t1);}
t2=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5156,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:982: member* */
f_4934(t3,lf[363],((C_word*)t2)[1]);}

/* k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_5156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5156,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5158,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:983: member* */
f_4934(t2,lf[362],((C_word*)((C_word*)t0)[2])[1]);}

/* k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_5158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5158,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5160,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5944,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(t1);
t5=C_i_pairp(t4);
t6=C_i_not(t5);
if(C_truep(t6)){
if(C_truep(t6)){
/* csi.scm:988: ##sys#error */
t7=*((C_word*)lf[56]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t3,lf[360]);}
else{
t7=t3;
f_5944(2,t7,C_SCHEME_UNDEFINED);}}
else{
t7=C_i_cadr(t1);
t8=C_i_string_length(t7);
t9=C_eqp(t8,C_fix(0));
if(C_truep(t9)){
if(C_truep(t9)){
/* csi.scm:988: ##sys#error */
t10=*((C_word*)lf[56]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t3,lf[360]);}
else{
t10=t3;
f_5944(2,t10,C_SCHEME_UNDEFINED);}}
else{
t10=t1;
t11=C_u_i_cdr(t10);
t12=C_u_i_car(t11);
t13=C_i_string_ref(t12,C_fix(0));
if(C_truep(C_i_char_equalp(C_make_character(45),t13))){
/* csi.scm:988: ##sys#error */
t14=*((C_word*)lf[56]+1);
((C_proc3)(void*)(*((C_word*)t14+1)))(3,t14,t3,lf[360]);}
else{
t14=t3;
f_5944(2,t14,C_SCHEME_UNDEFINED);}}}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6017,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6028,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:998: canonicalize-args */
f_4986(t4,((C_word*)t0)[5]);}}

/* k2907 */
static void C_ccall f_2908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2908,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2910,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_2910(t5,((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* f_2902 */
static void C_ccall f_2902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2902,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2908,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:459: read */
t3=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* f_3872 in doloop577 in k3854 in k3851 in k3824 in k3714 in k3690 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in ... */
static void C_ccall f_3872(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3872,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(0));
t4=C_slot(t2,C_fix(1));
/* csi.scm:704: fprintf */
t5=*((C_word*)lf[160]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t1,((C_word*)t0)[2],lf[228],t3,t4);}

/* ##csi#run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_5148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5148,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5152,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6034,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:979: get-environment-variable */
t4=C_fast_retrieve(lf[42]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[371]);}

/* k5351 in k5349 in k5347 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in ... */
static void C_fcall f_5352(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5352,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5357,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_5357(t5,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}

/* doloop1353 in k5351 in k5349 in k5347 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in ... */
static void C_fcall f_5357(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word *a;
loop:
a=C_alloc(17);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5357,NULL,3,t0,t1,t2);}
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_nullp(((C_word*)t3)[1]))){
if(C_truep(((C_word*)t0)[2])){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5369,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5374,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1088: call/cc */
t6=*((C_word*)lf[116]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}}
else{
t4=C_i_car(((C_word*)t3)[1]);
t5=C_i_member(t4,lf[282]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5391,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t7=C_i_cdr(((C_word*)t3)[1]);
t36=t1;
t37=t7;
t1=t36;
t2=t37;
goto loop;}
else{
if(C_truep((C_truep(C_i_equalp(t4,lf[283]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[284]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[285]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[286]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[287]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[288]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[289]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))))){
t7=C_i_cdr(((C_word*)t3)[1]);
t8=C_set_block_item(t3,0,t7);
t9=C_i_cdr(((C_word*)t3)[1]);
t36=t1;
t37=t9;
t1=t36;
t2=t37;
goto loop;}
else{
t7=C_i_string_equal_p(lf[290],t4);
t8=(C_truep(t7)?t7:C_u_i_string_equal_p(lf[291],t4));
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5417,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5428,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
t11=C_i_cadr(((C_word*)t3)[1]);
/* csi.scm:1098: string->symbol */
t12=*((C_word*)lf[293]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t10,t11);}
else{
t9=C_u_i_string_equal_p(lf[294],t4);
t10=(C_truep(t9)?t9:C_u_i_string_equal_p(lf[295],t4));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5441,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t12=C_i_cadr(((C_word*)t3)[1]);
/* csi.scm:1101: evalstring */
f_5252(t11,t12,C_SCHEME_END_OF_LIST);}
else{
t11=C_u_i_string_equal_p(lf[296],t4);
t12=(C_truep(t11)?t11:C_u_i_string_equal_p(lf[297],t4));
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5456,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t14=C_i_cadr(((C_word*)t3)[1]);
t15=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5463,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1104: evalstring */
f_5252(t13,t14,C_a_i_list(&a,1,t15));}
else{
t13=C_u_i_string_equal_p(lf[298],t4);
t14=(C_truep(t13)?t13:C_u_i_string_equal_p(lf[299],t4));
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5476,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t16=C_i_cadr(((C_word*)t3)[1]);
t17=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5483,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1107: evalstring */
f_5252(t15,t16,C_a_i_list(&a,1,t17));}
else{
t15=(C_truep(((C_word*)t0)[5])?C_i_car(((C_word*)t0)[5]):C_SCHEME_FALSE);
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5490,a[2]=t15,a[3]=t6,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_equalp(lf[303],t15))){
t17=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5537,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1111: ##sys#load */
((C_proc5)C_fast_retrieve_symbol_proc(lf[309]))(5,*((C_word*)lf[309]+1),t16,t4,t17,C_SCHEME_FALSE);}
else{
/* csi.scm:1111: ##sys#load */
((C_proc5)C_fast_retrieve_symbol_proc(lf[309]))(5,*((C_word*)lf[309]+1),t16,t4,C_SCHEME_FALSE,C_SCHEME_FALSE);}}}}}}}}}

/* k5349 in k5347 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in ... */
static void C_ccall f_5350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5350,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5352,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=C_set_block_item(lf[5] /* ##sys#notices-enabled */,0,C_SCHEME_FALSE);
t4=t2;
f_5352(t4,t3);}
else{
t3=t2;
f_5352(t3,C_SCHEME_UNDEFINED);}}

/* for-each-loop301 in k2706 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_2732(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2732,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2741,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:408: g302 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2725 in k2706 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k4870 in doloop906 */
static void C_ccall f_4872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4872,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4878,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:907: ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[34]))(4,*((C_word*)lf[34]+1),t2,lf[115],((C_word*)t0)[4]);}

/* k4877 in k4870 in doloop906 */
static void C_ccall f_4878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:907: fail */
t2=((C_word*)t0)[2];
f_4764(t2,((C_word*)t0)[3],t1);}

/* doloop369 in k2907 */
static void C_fcall f_2910(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2910,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eofp(t2))){
/* csi.scm:461: reverse */
t4=*((C_word*)lf[368]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2926,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:459: read */
t5=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}}

/* f_2897 */
static void C_ccall f_2897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2897,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2902,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2931,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:458: ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* f_2892 */
static void C_ccall f_2892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2892,2,t0,t1);}
/* csi.scm:458: ##sys#error */
t2=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[367],((C_word*)t0)[2]);}

/* for-each-loop920 in doloop906 */
static void C_fcall f_4880(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4880,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4889,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* csi.scm:894: g921 */
t9=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k4888 in for-each-loop920 in doloop906 */
static void C_ccall f_4889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_4880(t4,((C_word*)t0)[5],t2,t3);}

/* k2925 in doloop369 in k2907 */
static void C_ccall f_2926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2926,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)((C_word*)t0)[4])[1];
f_2910(t3,((C_word*)t0)[5],t1,t2);}

/* loop in k5025 in k5011 in loop in canonicalize-args in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static C_word C_fcall f_5123(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:
t2=C_i_nullp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_i_car(t1);
if(C_truep((C_truep(C_eqp(t3,C_make_character(107)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(115)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(118)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(104)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(68)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(101)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(105)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(82)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(98)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(110)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(113)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(119)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(45)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(73)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(112)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(80)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))))))))))))))){
t4=t1;
t5=C_u_i_cdr(t4);
t7=t5;
t1=t7;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* k2751 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k5389 in doloop1353 in k5351 in k5349 in k5347 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in ... */
static void C_ccall f_5391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_5357(t3,((C_word*)t0)[4],t2);}

/* k3824 in k3714 in k3690 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3826,2,t0,t1);}
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3830,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:688: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[4],lf[224],t2);}
else{
if(C_truep(C_lambdainfop(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3842,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:691: ##sys#lambda-info->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[226]))(3,*((C_word*)lf[226]+1),t2,((C_word*)t0)[2]);}
else{
if(C_truep(C_i_structurep(((C_word*)t0)[2],lf[227]))){
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3853,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(t2,C_fix(1));
t5=(C_truep(t4)?lf[230]:lf[231]);
t6=C_slot(((C_word*)t0)[2],C_fix(3));
/* csi.scm:694: fprintf */
t7=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t7+1)))(7,t7,t3,((C_word*)t0)[4],lf[232],t2,t5,t6);}
else{
if(C_truep(C_i_structurep(((C_word*)t0)[2],lf[233]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3934,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(1));
/* csi.scm:708: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[4],lf[236],t3);}
else{
if(C_truep(C_structurep(((C_word*)t0)[2]))){
t2=C_slot(((C_word*)t0)[2],C_fix(0));
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4023,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:724: ##sys#hash-table-ref */
((C_proc4)C_fast_retrieve_symbol_proc(lf[240]))(4,*((C_word*)lf[240]+1),t3,C_retrieve2(lf[156],"describer-table"),t2);}
else{
/* csi.scm:731: fprintf */
t2=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],lf[241]);}}}}}}

/* k3819 in k3714 in k3690 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:685: fprintf */
t2=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[221],t1);}

/* k3087 in k3066 in k3063 in k3060 in k3057 in k3054 in k3051 in k3045 in k3021 in k2977 in k2975 in k2961 in k2959 in k2957 */
static void C_ccall f_3088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:501: printf */
t2=*((C_word*)lf[100]+1);
((C_proc20)(void*)(*((C_word*)t2+1)))(20,t2,((C_word*)t0)[2],lf[141],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],C_fast_retrieve(lf[142]),((C_word*)t0)[10],((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[13],((C_word*)t0)[14],((C_word*)t0)[15],((C_word*)t0)[16],((C_word*)t0)[17],t1);}

/* k4091 in k4022 in k3824 in k3714 in k3690 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in ... */
static void C_ccall f_4092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:730: descseq */
t2=((C_word*)t0)[2];
f_3242(6,t2,((C_word*)t0)[3],C_SCHEME_FALSE,*((C_word*)lf[180]+1),*((C_word*)lf[182]+1),C_fix(1));}

/* doloop934 */
static void C_fcall f_4816(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4816,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4825,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4836,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=t3,a[7]=((C_word*)t0)[2],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t6=C_i_car(t3);
/* csi.scm:899: compare */
t7=((C_word*)t0)[5];
f_4734(t7,t5,t6);}}

/* f_4811 in doloop906 */
static void C_ccall f_4811(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4811,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4816,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_4816(t7,t1,C_fix(0),t2);}

/* f_2708 in k2706 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2708(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2708,3,t0,t1,t2);}
t3=C_i_caddr(t2);
if(C_truep(t3)){
/* csi.scm:412: print */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,C_make_character(32),t3);}
else{
t4=t2;
t5=C_u_i_car(t4);
/* csi.scm:413: print */
t6=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,lf[120],t5);}}

/* k2706 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2707,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2708,tmp=(C_word)a,a+=2,tmp);
t3=C_retrieve2(lf[63],"command-table");
t4=C_i_check_list_2(C_retrieve2(lf[63],"command-table"),lf[92]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2727,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2732,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_2732(t9,t5,C_retrieve2(lf[63],"command-table"));}

/* k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in ... */
static void C_ccall f_5322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5322,2,t0,t1);}
t2=C_fast_retrieve(lf[279]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5324,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
/* csi.scm:1052: collect-options */
t4=((C_word*)((C_word*)t0)[11])[1];
f_5177(t4,t3,lf[336]);}

/* k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2239,2,t0,t1);}
t2=C_mutate((C_word*)lf[58]+1 /* (set! ##csi#tty-input? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2241,tmp=(C_word)a,a+=2,tmp));
t3=C_set_block_item(lf[61] /* ##sys#break-on-error */,0,C_SCHEME_FALSE);
t4=C_fast_retrieve(lf[62]);
t5=C_mutate((C_word*)lf[62]+1 /* (set! ##sys#read-prompt-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2254,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=lf[63] /* command-table */ =C_SCHEME_END_OF_LIST;;
t7=C_mutate((C_word*)lf[64]+1 /* (set! toplevel-command ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2267,tmp=(C_word)a,a+=2,tmp));
t8=C_fast_retrieve(lf[65]);
t9=C_fast_retrieve(lf[66]);
t10=C_fast_retrieve(lf[67]);
t11=C_fast_retrieve(lf[39]);
t12=C_fast_retrieve(lf[68]);
t13=C_fast_retrieve(lf[69]);
t14=*((C_word*)lf[70]+1);
t15=C_mutate(&lf[71] /* (set! csi-eval ...) */,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2312,a[2]=t13,a[3]=t12,a[4]=t8,a[5]=t11,a[6]=t10,a[7]=t9,a[8]=t14,tmp=(C_word)a,a+=9,tmp));
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2820,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t17=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6143,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:427: toplevel-command */
t18=C_fast_retrieve(lf[64]);
f_2267(5,t18,t16,lf[393],t17,lf[394]);}

/* k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in ... */
static void C_ccall f_5329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5329,2,t0,t1);}
t2=C_fast_retrieve(lf[280]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5331,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
/* csi.scm:1053: collect-options */
t4=((C_word*)((C_word*)t0)[11])[1];
f_5177(t4,t3,lf[335]);}

/* k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in ... */
static void C_ccall f_5324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5324,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[92]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5802,a[2]=t5,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5802(t7,t3,t1);}

/* k4824 in doloop934 */
static void C_ccall f_4825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=((C_word*)((C_word*)t0)[4])[1];
f_4816(t5,((C_word*)t0)[5],t2,t4);}

/* ##csi#tty-input? in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2241,2,t0,t1);}
t2=C_fudge(C_fix(12));
if(C_truep(t2)){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* csi.scm:270: ##sys#tty-port? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[59]))(3,*((C_word*)lf[59]+1),t1,*((C_word*)lf[60]+1));}}

/* k4083 in map-loop649 */
static void C_ccall f_4084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4084,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4059(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4059(t6,((C_word*)t0)[5],t5);}}

/* ##sys#read-prompt-hook in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2254(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2254,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2261,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_fudge(C_fix(12));
if(C_truep(t3)){
if(C_truep(t3)){
/* csi.scm:277: old */
t4=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t1);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}
else{
/* csi.scm:270: ##sys#tty-port? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[59]))(3,*((C_word*)lf[59]+1),t2,*((C_word*)lf[60]+1));}}

/* k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in ... */
static void C_ccall f_5309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5309,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5311,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5861,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1041: member* */
f_4934(t3,lf[344],((C_word*)((C_word*)t0)[6])[1]);}

/* k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in ... */
static void C_fcall f_5307(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5307,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5309,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_member(lf[345],((C_word*)((C_word*)t0)[6])[1]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5872,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5878,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1039: chicken-version */
t5=C_fast_retrieve(lf[20]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t3=t2;
f_5309(2,t3,C_SCHEME_UNDEFINED);}}

/* k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in ... */
static void C_ccall f_5305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5305,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5307,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_member(lf[346],((C_word*)((C_word*)t0)[6])[1]))){
t3=C_set_block_item(lf[347] /* ##sys#setup-mode */,0,C_SCHEME_TRUE);
t4=t2;
f_5307(t4,t3);}
else{
t3=t2;
f_5307(t3,C_SCHEME_UNDEFINED);}}

/* k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in ... */
static void C_ccall f_5303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5303,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5305,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5885,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1031: member* */
f_4934(t3,lf[348],((C_word*)((C_word*)t0)[6])[1]);}

/* k2740 in for-each-loop301 in k2706 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2732(t3,((C_word*)t0)[4],t2);}

/* k2259 in read-prompt-hook in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* csi.scm:277: old */
t2=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[3]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k4800 in doloop906 */
static void C_ccall f_4802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)((C_word*)t0)[3])[1];
f_4781(t4,((C_word*)t0)[4],t3);}

/* k5951 in k5949 in k5947 in k5945 in k5943 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in ... */
static void C_ccall f_5952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5952,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_i_set_i_slot(t3,C_fix(1),C_SCHEME_END_OF_LIST);
if(C_truep(*((C_word*)lf[356]+1))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5959,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=C_i_cadr(((C_word*)t0)[2]);
/* csi.scm:995: lookup-script-file */
t7=C_fast_retrieve(lf[36]);
f_2037(3,t7,t5,t6);}
else{
t5=C_SCHEME_UNDEFINED;
t6=((C_word*)t0)[3];
f_5160(t6,t5);}}

/* k5949 in k5947 in k5945 in k5943 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in ... */
static void C_ccall f_5950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5950,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5952,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:992: register-feature! */
t3=C_fast_retrieve(lf[279]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[357]);}

/* k5958 in k5951 in k5949 in k5947 in k5945 in k5943 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in ... */
static void C_ccall f_5959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
f_5160(t4,C_i_set_car(t3,t1));}
else{
t2=((C_word*)t0)[3];
f_5160(t2,C_SCHEME_FALSE);}}

/* k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in ... */
static void C_ccall f_5331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5331,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[92]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5336,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5782,a[2]=t5,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5782(t7,t3,t1);}

/* toplevel-command in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2267(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr4r,(void*)f_2267r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2267r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2267r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a=C_alloc(15);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_check_symbol_2(t2,lf[64]);
t8=(C_truep(t6)?C_i_check_string_2(t6,lf[64]):C_SCHEME_UNDEFINED);
t9=C_i_assq(t2,C_retrieve2(lf[63],"command-table"));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2281,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t9)){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2285,a[2]=t3,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:284: g178 */
t12=t11;
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t10,t9);}
else{
t11=C_a_i_list3(&a,3,t2,t3,t6);
t12=C_a_i_cons(&a,2,t11,C_retrieve2(lf[63],"command-table"));
t13=C_mutate(&lf[63] /* (set! command-table ...) */,t12);
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,*((C_word*)lf[47]+1));}}

/* k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in ... */
static void C_ccall f_5336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5336,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5340,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5704,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_fast_retrieve(lf[29]);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5707,a[2]=t3,a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=t7,a[6]=t5,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
/* csi.scm:1056: collect-options */
t10=((C_word*)((C_word*)t0)[11])[1];
f_5177(t10,t9,lf[334]);}

/* k3024 in k3021 in k2977 in k2975 in k2961 in k2959 in k2957 */
static void C_ccall f_3025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3025,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3027,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:532: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[134]))(4,*((C_word*)lf[134]+1),t2,C_make_character(10),*((C_word*)lf[51]+1));}

/* k3026 in k3024 in k3021 in k2977 in k2975 in k2961 in k2959 in k2957 */
static void C_ccall f_3027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3027,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3029,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fudge(C_fix(14)))){
/* csi.scm:533: display */
t3=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[133]);}
else{
t3=t2;
f_3029(2,t3,C_SCHEME_UNDEFINED);}}

/* k5945 in k5943 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 in ... */
static void C_ccall f_5946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5946,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5948,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
/* csi.scm:990: command-line-arguments */
t6=C_fast_retrieve(lf[302]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t2,t5);}

/* k3028 in k3026 in k3024 in k3021 in k2977 in k2975 in k2961 in k2959 in k2957 */
static void C_ccall f_3029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3029,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3031,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fudge(C_fix(15)))){
/* csi.scm:534: display */
t3=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[132]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k5943 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_5944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5944,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5946,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* csi.scm:989: program-name */
t4=C_fast_retrieve(lf[359]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k5947 in k5945 in k5943 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in ... */
static void C_ccall f_5948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5948,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5950,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:991: register-feature! */
t3=C_fast_retrieve(lf[279]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[358]);}

/* k5368 in doloop1353 in k5351 in k5349 in k5347 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in ... */
static void C_ccall f_5369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1092: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[134]))(4,*((C_word*)lf[134]+1),((C_word*)t0)[2],C_make_character(10),*((C_word*)lf[51]+1));}

/* k3021 in k2977 in k2975 in k2961 in k2959 in k2957 */
static void C_ccall f_3023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3023,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3025,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3046,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:515: machine-type */
t4=C_fast_retrieve(lf[147]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k2279 in toplevel-command in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* f_2285 in toplevel-command in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2285(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2285,3,t0,t1,t2);}
t3=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_set_cdr(t2,t3));}

/* k5930 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in ... */
static void C_ccall f_5931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* csi.scm:1006: string-split */
t3=C_fast_retrieve(lf[39]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,lf[350]);}
else{
/* csi.scm:1006: string-split */
t2=C_fast_retrieve(lf[39]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[351],lf[350]);}}

/* k5938 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in ... */
static void C_ccall f_5939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_5165(t3,t2);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
f_5165(t3,t2);}}

/* k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in ... */
static void C_fcall f_5311(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5311,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5313,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[8])){
t3=t2;
f_5313(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5855,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1045: load-verbose */
t4=C_fast_retrieve(lf[341]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_TRUE);}}

/* k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in ... */
static void C_ccall f_5317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5317,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[92]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5322,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5822,a[2]=t5,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5822(t7,t3,t1);}

/* k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in ... */
static void C_ccall f_5315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5315,2,t0,t1);}
t2=C_fast_retrieve(lf[279]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5317,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
/* csi.scm:1051: collect-options */
t4=((C_word*)((C_word*)t0)[11])[1];
f_5177(t4,t3,lf[337]);}

/* k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in ... */
static void C_ccall f_5313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5313,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5315,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5843,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1047: member* */
f_4934(t3,lf[340],((C_word*)((C_word*)t0)[6])[1]);}

/* k3006 in k2991 in k2981 */
static void C_ccall f_3007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:499: display */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5924 in map-loop1165 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in ... */
static void C_ccall f_5925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5925,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5900(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5900(t6,((C_word*)t0)[5],t5);}}

/* k2999 in k2991 in k2981 */
static void C_ccall f_3000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4022 in k3824 in k3714 in k3690 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 in ... */
static void C_ccall f_4023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4023,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4027,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:723: g633 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[4],t1);}
else{
t2=C_i_assq(((C_word*)t0)[5],C_retrieve2(lf[154],"##csi#bytevector-data"));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4040,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:723: g644 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[4],t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4092,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[2],C_fix(0));
/* csi.scm:729: fprintf */
t5=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,((C_word*)t0)[3],lf[239],t4);}}}

/* f_4027 in k4022 in k3824 in k3714 in k3690 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in ... */
static void C_ccall f_4027(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4027,3,t0,t1,t2);}
/* csi.scm:724: g641 */
t3=t2;
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5093 in k5011 in loop in canonicalize-args in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_5094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5094,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k3292 in k3290 in loop2 in k3273 in loop1 in k3247 in k3354 in descseq in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in ... */
static void C_ccall f_3293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],((C_word*)t0)[3]);
/* csi.scm:597: loop1 */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3253(t3,((C_word*)t0)[5],t2);}

/* k3290 in loop2 in k3273 in loop1 in k3247 in k3354 in descseq in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 in ... */
static void C_ccall f_3291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3291,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3293,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[3],C_fix(1)))){
t3=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
t4=C_eqp(((C_word*)t0)[3],C_fix(2));
if(C_truep(t4)){
/* csi.scm:593: fprintf */
t5=*((C_word*)lf[160]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t2,((C_word*)t0)[6],lf[162],t3,lf[163]);}
else{
/* csi.scm:593: fprintf */
t5=*((C_word*)lf[160]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t2,((C_word*)t0)[6],lf[162],t3,lf[164]);}}
else{
/* csi.scm:596: newline */
t3=*((C_word*)lf[22]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}}

/* k5086 in k5011 in loop in canonicalize-args in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_5087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string->list */
t2=C_fast_retrieve(lf[273]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6090 in k6105 in k6075 in k6064 */
static void C_ccall f_6091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6091,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6097,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:916: rename1001 */
t3=((C_word*)t0)[7];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[264]);}

/* loop2 in k3273 in loop1 in k3247 in k3354 in descseq in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_3282(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3282,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3291,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3319,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:588: ##sys#with-print-length-limit */
((C_proc4)C_fast_retrieve_symbol_proc(lf[53]))(4,*((C_word*)lf[53]+1),t4,C_fix(1000),t5);}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3343,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:598: pref */
t5=((C_word*)t0)[8];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[9],t3);}}

/* k6096 in k6090 in k6105 in k6075 in k6064 */
static void C_ccall f_6097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6097,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[4],t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_a_i_cons(&a,2,((C_word*)t0)[5],t6);
t8=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_cons(&a,2,((C_word*)t0)[7],t7));}

/* k4000 in for-each-loop604 in k3933 in k3824 in k3714 in k3690 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in ... */
static void C_ccall f_4001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3992(t3,((C_word*)t0)[4],t2);}

/* k5077 in map-loop1060 in k5025 in k5011 in loop in canonicalize-args in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_5078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5078,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5053(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5053(t6,((C_word*)t0)[5],t5);}}

/* k3273 in loop1 in k3247 in k3354 in descseq in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3274,2,t0,t1);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3282,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=t5,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp));
t7=((C_word*)t5)[1];
f_3282(t7,((C_word*)t0)[9],C_fix(1),t3);}

/* k4293 in k4279 in justify in hexdump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[2];
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[34]))(4,*((C_word*)lf[34]+1),((C_word*)t0)[3],t1,t2);}

/* map-loop1060 in k5025 in k5011 in loop in canonicalize-args in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_5053(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5053,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5078,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:958: g1066 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* justify in hexdump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_4276(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4276,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4280,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:765: number->string */
C_number_to_string(4,0,t6,t2,t4);}

/* ##csi#lookup-script-file in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2037(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2037,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2041,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:206: get-environment-variable */
t4=C_fast_retrieve(lf[42]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[43]);}

/* ##csi#hexdump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4272(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[12],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4272,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4276,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4303,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=t4,a[6]=t2,a[7]=t6,tmp=(C_word)a,a+=8,tmp));
t10=((C_word*)t8)[1];
f_4303(t10,t1,C_fix(0));}

/* k5044 in k5025 in k5011 in loop in canonicalize-args in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_5046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5046,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5049,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* csi.scm:958: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4992(t5,t2,t4);}

/* k5048 in k5044 in k5025 in k5011 in loop in canonicalize-args in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_5049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:958: append */
t2=*((C_word*)lf[238]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2040 in lookup-script-file in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2041,2,t0,t1);}
t2=C_block_size(((C_word*)t0)[2]);
if(C_truep(C_i_greaterp(t2,C_fix(0)))){
t3=C_i_string_ref(((C_word*)t0)[2],C_fix(0));
t4=C_i_char_equalp(t3,C_make_character(92));
t5=(C_truep(t4)?t4:C_i_char_equalp(t3,C_make_character(47)));
if(C_truep(t5)){
/* csi.scm:208: addext */
f_1988(((C_word*)t0)[4],((C_word*)t0)[2]);}
else{
t6=C_retrieve2(lf[28],"dirseparator\077");
t7=((C_word*)t0)[2];
t8=C_block_size(t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2016,a[2]=t8,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t10=f_2016(t9,C_fix(0));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2064,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:210: _getcwd */
t12=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t11,((C_word*)t0)[6],C_fix(256));}
else{
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2075,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:212: addext */
f_1988(t11,((C_word*)t0)[2]);}}}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k6051 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_6052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6052,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6055,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6057,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:916: ##sys#er-transformer */
((C_proc3)C_fast_retrieve_symbol_proc(lf[380]))(3,*((C_word*)lf[380]+1),t2,t3);}

/* k6054 in k6051 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_6055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:915: ##sys#extend-macro-environment */
((C_proc5)C_fast_retrieve_symbol_proc(lf[373]))(5,*((C_word*)lf[373]+1),((C_word*)t0)[2],lf[374],((C_word*)t0)[3],t1);}

/* f_6057 in k6051 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_6057(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6057,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6066,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t7=C_i_cdr(t5);
if(C_truep(C_i_pairp(t7))){
t8=C_i_cdr(t7);
t9=t6;
f_6066(t9,C_eqp(t8,C_SCHEME_END_OF_LIST));}
else{
t8=t6;
f_6066(t8,C_SCHEME_FALSE);}}
else{
t7=t6;
f_6066(t7,C_SCHEME_FALSE);}}

/* k4279 in justify in hexdump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4280,2,t0,t1);}
t2=C_block_size(t1);
if(C_truep(C_fixnum_lessp(t2,((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4294,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_fixnum_difference(((C_word*)t0)[2],t2);
/* csi.scm:768: make-string */
t5=*((C_word*)lf[130]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[4]);}
else{
t3=t1;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_2207 in k2192 in k2190 in k2188 in doloop130 in history-show in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2207,2,t0,t1);}
t2=C_i_vector_ref(C_fast_retrieve(lf[44]),((C_word*)t0)[2]);
/* csi.scm:250: ##sys#print */
t3=*((C_word*)lf[52]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,t2,C_SCHEME_TRUE,*((C_word*)lf[51]+1));}

/* f_5037 in k5025 in k5011 in loop in canonicalize-args in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_5037(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5037,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_string(&a,2,C_make_character(45),t2));}

/* k6040 in k6038 in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_6041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k6042 in k6038 in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_6044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* f_6046 in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_6046(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6046,3,t0,t1,t2);}
/* csi.scm:922: ##sys#user-interrupt-hook */
((C_proc2)C_fast_retrieve_symbol_proc(lf[263]))(2,*((C_word*)lf[263]+1),t1);}

/* ##csi#history-ref in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2215(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2215,3,t0,t1,t2);}
t3=C_i_inexact_to_exact(t2);
t4=C_fixnum_greaterp(t3,C_fix(0));
t5=(C_truep(t4)?C_fixnum_less_or_equal_p(t3,C_fast_retrieve(lf[25])):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_vector_ref(C_fast_retrieve(lf[44]),t3));}
else{
/* csi.scm:257: ##sys#error */
t6=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,lf[57],t2);}}

/* k5025 in k5011 in loop in canonicalize-args in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_5026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5026,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5123,tmp=(C_word)a,a+=2,tmp);
t4=f_5123(t2);
if(C_truep(t4)){
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5037,tmp=(C_word)a,a+=2,tmp);
t10=t1;
t11=C_i_check_list_2(t10,lf[237]);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5046,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5053,a[2]=t8,a[3]=t14,a[4]=t6,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_5053(t16,t12,t10);}
else{
/* csi.scm:959: ##sys#error */
t5=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],lf[272],((C_word*)t0)[5]);}}

/* k2063 in k2040 in lookup-script-file in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2064,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2070,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2073,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:211: chop-separator */
t4=C_fast_retrieve(lf[29]);
f_1942(3,t4,t3,t1);}

/* k6075 in k6064 */
static void C_ccall f_6076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6076,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6106,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:916: rename1001 */
t3=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[377]);}

/* k4513 in k4511 in k4509 in k4507 in k4505 in k4503 in doloop784 in k4473 in show-frameinfo in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in ... */
static void C_ccall f_4514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4514,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4517,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* csi.scm:815: display */
t3=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[260],((C_word*)t0)[12]);}

/* k4509 in k4507 in k4505 in k4503 in doloop784 in k4473 in show-frameinfo in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4510,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4512,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(9),((C_word*)t0)[12]);}

/* k4511 in k4509 in k4507 in k4505 in k4503 in doloop784 in k4473 in show-frameinfo in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 in ... */
static void C_ccall f_4512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4512,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
t3=C_slot(((C_word*)t0)[13],C_fix(0));
/* csi.scm:815: display */
t4=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[12]);}

/* k4515 in k4513 in k4511 in k4509 in k4507 in k4505 in k4503 in doloop784 in k4473 in show-frameinfo in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in ... */
static void C_ccall f_4517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4517,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4519,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[11])){
t3=*((C_word*)lf[51]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4632,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t5=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_make_character(91),*((C_word*)lf[51]+1));}
else{
t3=t2;
f_4519(2,t3,C_SCHEME_UNDEFINED);}}

/* k5011 in loop in canonicalize-args in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_5013(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5013,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_subchar(((C_word*)t0)[2],C_fix(1));
if(C_truep(C_i_char_equalp(C_make_character(58),t2))){
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* csi.scm:955: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4992(t5,((C_word*)t0)[5],t4);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5026,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5087,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:956: substring */
t5=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],C_fix(1));}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5094,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* csi.scm:960: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4992(t5,t2,t4);}}

/* k4518 in k4515 in k4513 in k4511 in k4509 in k4507 in k4505 in k4503 in doloop784 in k4473 in show-frameinfo in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in ... */
static void C_ccall f_4519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4519,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4521,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[10])){
/* csi.scm:830: prin1 */
f_4455(t2,((C_word*)t0)[10]);}
else{
t3=t2;
f_4521(2,t3,C_SCHEME_UNDEFINED);}}

/* k2069 in k2063 in k2040 in lookup-script-file in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:211: addext */
f_1988(((C_word*)t0)[3],t1);}

/* k2072 in k2063 in k2040 in lookup-script-file in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:211: string-append */
t2=*((C_word*)lf[37]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,lf[38],((C_word*)t0)[3]);}

/* k2074 in k2040 in lookup-script-file in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2075,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2080,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[34]))(4,*((C_word*)lf[34]+1),t2,lf[41],t3);}}

/* k6064 */
static void C_fcall f_6066(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6066,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6076,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:916: rename1001 */
t6=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,lf[378]);}
else{
/* csi.scm:916: ##sys#syntax-rules-mismatch */
((C_proc3)C_fast_retrieve_symbol_proc(lf[379]))(3,*((C_word*)lf[379]+1),((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* f_3319 in loop2 in k3273 in loop1 in k3247 in k3354 in descseq in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 in ... */
static void C_ccall f_3319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3319,2,t0,t1);}
/* csi.scm:591: fprintf */
t2=*((C_word*)lf[160]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,t1,((C_word*)t0)[2],lf[165],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k4524 in k4522 in k4520 in k4518 in k4515 in k4513 in k4511 in k4509 in k4507 in k4505 in k4503 in doloop784 in k4473 in show-frameinfo in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in ... */
static void C_ccall f_4526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
t5=((C_word*)((C_word*)t0)[4])[1];
f_4483(t5,((C_word*)t0)[5],t3,t4);}

/* k4522 in k4520 in k4518 in k4515 in k4513 in k4511 in k4509 in k4507 in k4505 in k4503 in doloop784 in k4473 in show-frameinfo in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in ... */
static void C_ccall f_4523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4523,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4526,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_truep(((C_word*)t0)[6])?((C_word*)t0)[7]:C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4538,a[2]=((C_word*)t0)[8],tmp=(C_word)a,a+=3,tmp);
t5=C_slot(((C_word*)t0)[9],C_fix(2));
t6=C_slot(((C_word*)t0)[9],C_fix(3));
t7=C_i_check_list_2(t5,lf[92]);
t8=C_i_check_list_2(t6,lf[92]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4597,a[2]=t10,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_4597(t12,t2,t5,t6);}
else{
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
t7=((C_word*)((C_word*)t0)[4])[1];
f_4483(t7,((C_word*)t0)[5],t5,t6);}}

/* k4520 in k4518 in k4515 in k4513 in k4511 in k4509 in k4507 in k4505 in k4503 in doloop784 in k4473 in show-frameinfo in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in ... */
static void C_ccall f_4521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4521,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4523,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* csi.scm:831: newline */
t3=*((C_word*)lf[22]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2079 in k2074 in k2040 in lookup-script-file in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2080,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2086,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:215: string-split */
t3=C_fast_retrieve(lf[39]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[40]);}

/* lp in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static C_word C_fcall f_3206(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:
if(C_truep(C_i_pairp(t1))){
t2=C_i_car(t1);
t3=C_eqp(t1,t2);
if(C_truep(t3)){
return(t3);}
else{
t4=t1;
t5=C_u_i_cdr(t4);
t7=t5;
t1=t7;
goto loop;}}
else{
return(C_SCHEME_FALSE);}}

/* k6015 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_6017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_i_member(lf[361],((C_word*)((C_word*)t0)[2])[1]);
t4=((C_word*)t0)[3];
f_5160(t4,(C_truep(t3)?C_i_set_cdr(t3,C_SCHEME_END_OF_LIST):C_SCHEME_FALSE));}

/* k2085 in k2079 in k2074 in k2040 in lookup-script-file in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2086,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2088,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2088(t5,((C_word*)t0)[4],t1);}

/* loop in k2085 in k2079 in k2074 in k2040 in lookup-script-file in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_2088(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2088,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2097,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2111,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_slot(t2,C_fix(0));
/* csi.scm:217: chop-separator */
t6=C_fast_retrieve(lf[29]);
f_1942(3,t6,t4,t5);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k4210 in k4201 in k4162 */
static void C_ccall f_4211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:754: hexdump */
t2=C_fast_retrieve(lf[222]);
f_4272(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,*((C_word*)lf[223]+1),((C_word*)t0)[4]);}

/* k2098 in k2096 in loop in k2085 in k2079 in k2074 in k2040 in lookup-script-file in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* csi.scm:219: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2088(t3,((C_word*)t0)[2],t2);}}

/* k2096 in loop in k2085 in k2079 in k2074 in k2040 in lookup-script-file in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2097,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2099,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:218: addext */
f_1988(t2,t1);}

/* k4503 in doloop784 in k4473 in show-frameinfo in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4504,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4506,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* csi.scm:815: display */
t3=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[12]);}

/* k4505 in k4503 in doloop784 in k4473 in show-frameinfo in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4506,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4508,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(58),((C_word*)t0)[12]);}

/* k4507 in k4505 in k4503 in doloop784 in k4473 in show-frameinfo in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4508,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4510,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4646,a[2]=t2,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[7])){
t4=C_slot(((C_word*)t0)[9],C_fix(2));
t5=t3;
f_4646(t5,C_i_pairp(t4));}
else{
t4=t3;
f_4646(t4,C_SCHEME_FALSE);}}

/* k6033 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_6034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6034,2,t0,t1);}
t2=(C_truep(t1)?t1:lf[364]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2826,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:451: open-input-string */
t4=C_fast_retrieve(lf[278]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k6030 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_6031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:980: canonicalize-args */
f_4986(((C_word*)t0)[2],t1);}

/* k6038 in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_6039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6039,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6041,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6044,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
((C_proc2)C_fast_retrieve_symbol_proc(lf[372]))(2,*((C_word*)lf[372]+1),t3);}

/* doloop836 in k4545 */
static void C_fcall f_4551(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4551,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=*((C_word*)lf[51]+1);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4560,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t4,tmp=(C_word)a,a+=9,tmp);
/* csi.scm:837: display */
t6=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,lf[257],*((C_word*)lf[51]+1));}}

/* k6027 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_6028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:998: append */
t2=*((C_word*)lf[238]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)((C_word*)t0)[3])[1]);}

/* k5871 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in ... */
static void C_ccall f_5872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1040: exit */
t2=C_fast_retrieve(lf[72]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k5877 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in ... */
static void C_ccall f_5878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1039: print */
t2=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3354 in descseq in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3355,2,t0,t1);}
t2=C_fixnum_difference(t1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3248,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
/* csi.scm:579: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[3],lf[166],((C_word*)t0)[7],t2);}
else{
t4=t3;
f_3248(2,t4,C_SCHEME_UNDEFINED);}}

/* k4566 in k4563 in k4561 in k4559 in doloop836 in k4545 */
static void C_ccall f_4567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4567,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4570,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:842: newline */
t3=*((C_word*)lf[22]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3358 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3357,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3359,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_charp(((C_word*)t0)[3]))){
t3=C_fix(C_character_code(((C_word*)t0)[3]));
/* csi.scm:604: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc8)(void*)(*((C_word*)t4+1)))(8,t4,t2,((C_word*)t0)[4],lf[167],((C_word*)t0)[3],t3,t3,t3);}
else{
switch(((C_word*)t0)[3]){
case C_SCHEME_TRUE:
/* csi.scm:605: fprintf */
t3=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[168]);
case C_SCHEME_FALSE:
/* csi.scm:606: fprintf */
t3=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[169]);
default:
if(C_truep(C_i_nullp(((C_word*)t0)[3]))){
/* csi.scm:607: fprintf */
t3=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[170]);}
else{
if(C_truep(C_eofp(((C_word*)t0)[3]))){
/* csi.scm:608: fprintf */
t3=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[171]);}
else{
t3=*((C_word*)lf[47]+1);
t4=C_eqp(*((C_word*)lf[47]+1),((C_word*)t0)[3]);
if(C_truep(t4)){
/* csi.scm:609: fprintf */
t5=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,((C_word*)t0)[4],lf[172]);}
else{
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3423,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:611: fprintf */
t6=*((C_word*)lf[160]+1);
((C_proc8)(void*)(*((C_word*)t6+1)))(8,t6,t5,((C_word*)t0)[4],lf[174],((C_word*)t0)[3],((C_word*)t0)[3],((C_word*)t0)[3],((C_word*)t0)[3]);}
else{
t5=C_slot(lf[175],C_fix(0));
t6=C_eqp(((C_word*)t0)[3],t5);
if(C_truep(t6)){
/* csi.scm:616: fprintf */
t7=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,((C_word*)t0)[4],lf[176]);}
else{
if(C_truep(C_i_flonump(((C_word*)t0)[3]))){
/* csi.scm:617: fprintf */
t7=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t2,((C_word*)t0)[4],lf[177],((C_word*)t0)[3]);}
else{
if(C_truep(C_i_numberp(((C_word*)t0)[3]))){
/* csi.scm:618: fprintf */
t7=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t2,((C_word*)t0)[4],lf[178],((C_word*)t0)[3]);}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
/* csi.scm:619: descseq */
t7=((C_word*)t0)[5];
f_3242(6,t7,t2,lf[179],*((C_word*)lf[180]+1),((C_word*)t0)[6],C_fix(0));}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[3]))){
/* csi.scm:620: descseq */
t7=((C_word*)t0)[5];
f_3242(6,t7,t2,lf[181],*((C_word*)lf[180]+1),*((C_word*)lf[182]+1),C_fix(0));}
else{
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3488,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* csi.scm:621: keyword? */
t8=C_fast_retrieve(lf[245]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[3]);}}}}}}}}}}}}

/* k4559 in doloop836 in k4545 */
static void C_ccall f_4560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4560,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4562,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* csi.scm:837: write */
t4=*((C_word*)lf[185]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[8]);}

/* k4563 in k4561 in k4559 in doloop836 in k4545 */
static void C_ccall f_4565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4565,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4567,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[6],((C_word*)t0)[2]);
/* csi.scm:841: prin1 */
f_4455(t2,t3);}

/* k4561 in k4559 in doloop836 in k4545 */
static void C_ccall f_4562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4562,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4565,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:837: display */
t3=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[256],((C_word*)t0)[8]);}

/* k4201 in k4162 */
static void C_fcall f_4203(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4203,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4211,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_block_size(t2);
/* csi.scm:754: bestlen */
t5=((C_word*)t0)[5];
f_4142(t5,t3,t4);}
else{
/* csi.scm:755: ##sys#error */
t2=*((C_word*)lf[56]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[251],lf[254],((C_word*)t0)[2]);}}

/* k5859 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in ... */
static void C_ccall f_5861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5861,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5863,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=C_set_block_item(lf[342] /* ##sys#warnings-enabled */,0,C_SCHEME_FALSE);
t4=((C_word*)t0)[2];
f_5311(t4,t3);}
else{
/* csi.scm:1042: display */
t3=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[343]);}}
else{
t2=((C_word*)t0)[2];
f_5311(t2,C_SCHEME_UNDEFINED);}}

/* k3342 in loop2 in k3273 in loop1 in k3247 in k3354 in descseq in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 in ... */
static void C_ccall f_3343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* csi.scm:598: loop2 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3282(t5,((C_word*)t0)[6],t3,t4);}
else{
/* csi.scm:599: loop2 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_3282(t3,((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[7]);}}

/* k5862 in k5859 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in ... */
static void C_ccall f_5863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(lf[342] /* ##sys#warnings-enabled */,0,C_SCHEME_FALSE);
t3=((C_word*)t0)[2];
f_5311(t3,t2);}

/* f_4538 in k4522 in k4520 in k4518 in k4515 in k4513 in k4511 in k4509 in k4507 in k4505 in k4503 in doloop784 in k4473 in show-frameinfo in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in ... */
static void C_ccall f_4538(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4538,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4546,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:836: display */
t5=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[258]);}}

/* k4545 */
static void C_ccall f_4546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4546,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4551,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4551(t5,((C_word*)t0)[4],C_fix(0),((C_word*)t0)[5]);}

/* k5854 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in ... */
static void C_ccall f_5855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1046: print-banner */
t2=C_fast_retrieve(lf[16]);
f_1881(2,t2,((C_word*)t0)[2]);}

/* f6861 in k5841 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in ... */
static void C_ccall f6861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1050: case-sensitive */
t2=C_fast_retrieve(lf[318]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k2643 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k5841 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in ... */
static void C_ccall f_5843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5843,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5845,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6861,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1049: register-feature! */
t4=C_fast_retrieve(lf[279]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[338]);}
else{
/* csi.scm:1048: display */
t3=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[339]);}}
else{
t2=((C_word*)t0)[2];
f_5315(2,t2,C_SCHEME_UNDEFINED);}}

/* k5846 in k5844 in k5841 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in ... */
static void C_ccall f_5847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1050: case-sensitive */
t2=C_fast_retrieve(lf[318]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k5844 in k5841 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in ... */
static void C_ccall f_5845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5845,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5847,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1049: register-feature! */
t3=C_fast_retrieve(lf[279]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[338]);}

/* for-each-loop822 in k4522 in k4520 in k4518 in k4515 in k4513 in k4511 in k4509 in k4507 in k4505 in k4503 in doloop784 in k4473 in show-frameinfo in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in ... */
static void C_fcall f_4597(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4597,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4606,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* csi.scm:833: g823 */
t9=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k3505 in k3503 in k3501 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3507,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
if(C_truep(C_i_nullp(t2))){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,*((C_word*)lf[47]+1));}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3517,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:636: display */
t4=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[187],((C_word*)t0)[4]);}}

/* k3503 in k3501 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3504,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3507,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3571,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:629: ##sys#interned-symbol? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[194]))(3,*((C_word*)lf[194]+1),t3,((C_word*)t0)[2]);}

/* k3501 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3502,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3504,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:627: ##sys#qualified-symbol? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[195]))(3,*((C_word*)lf[195]+1),t2,((C_word*)t0)[2]);}

/* k2654 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* map-loop1165 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in ... */
static void C_fcall f_5900(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5900,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5925,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1005: g1171 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5830 in for-each-loop1237 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in ... */
static void C_ccall f_5831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5822(t3,((C_word*)t0)[4],t2);}

/* k3066 in k3063 in k3060 in k3057 in k3054 in k3051 in k3045 in k3021 in k2977 in k2975 in k2961 in k2959 in k2957 */
static void C_ccall f_3067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3067,2,t0,t1);}
t2=C_i_vector_ref(((C_word*)t0)[2],C_fix(2));
t3=C_i_vector_ref(((C_word*)t0)[3],C_fix(0));
t4=C_fudge(C_fix(17));
t5=(C_truep(t4)?lf[137]:lf[138]);
t6=C_i_vector_ref(((C_word*)t0)[3],C_fix(1));
t7=C_i_vector_ref(((C_word*)t0)[3],C_fix(2));
t8=C_fudge(C_fix(18));
t9=C_i_nequalp(C_fix(1),t8);
t10=(C_truep(t9)?lf[139]:lf[140]);
t11=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_3088,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=t1,a[12]=t2,a[13]=t3,a[14]=t5,a[15]=t6,a[16]=t7,a[17]=t10,tmp=(C_word)a,a+=18,tmp);
/* csi.scm:531: argv */
t12=((C_word*)t0)[13];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}

/* k3060 in k3057 in k3054 in k3051 in k3045 in k3021 in k2977 in k2975 in k2961 in k2959 in k2957 */
static void C_ccall f_3061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3061,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_3064,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
t3=C_i_vector_ref(((C_word*)t0)[2],C_fix(0));
/* csi.scm:523: shorten */
f_2964(t2,t3);}

/* k3063 in k3060 in k3057 in k3054 in k3051 in k3045 in k3021 in k2977 in k2975 in k2961 in k2959 in k2957 */
static void C_ccall f_3064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3064,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_3067,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
t3=C_i_vector_ref(((C_word*)t0)[2],C_fix(1));
/* csi.scm:524: shorten */
f_2964(t2,t3);}

/* k2001 in k1996 in k1993 in addext in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE));}

/* k3534 in k3532 in k3530 in doloop541 in k3516 in k3505 in k3503 in k3501 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in ... */
static void C_ccall f_3536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cddr(((C_word*)t0)[2]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_3522(t3,((C_word*)t0)[4],t2);}

/* k3532 in k3530 in doloop541 in k3516 in k3505 in k3503 in k3501 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in ... */
static void C_ccall f_3533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3533,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3536,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:644: newline */
t3=*((C_word*)lf[22]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k3530 in doloop541 in k3516 in k3505 in k3503 in k3501 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in ... */
static void C_ccall f_3531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3531,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3533,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3544,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:640: ##sys#with-print-length-limit */
((C_proc4)C_fast_retrieve_symbol_proc(lf[53]))(4,*((C_word*)lf[53]+1),t2,C_fix(1000),t3);}

/* for-each-loop1237 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in ... */
static void C_fcall f_5822(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5822,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5831,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1051: g1238 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3054 in k3051 in k3045 in k3021 in k2977 in k2975 in k2961 in k2959 in k2957 */
static void C_ccall f_3055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3055,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3058,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* csi.scm:519: build-platform */
t3=C_fast_retrieve(lf[144]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3057 in k3054 in k3051 in k3045 in k3021 in k2977 in k2975 in k2961 in k2959 in k2957 */
static void C_ccall f_3058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3058,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3061,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* csi.scm:521: repository-path */
t3=C_fast_retrieve(lf[143]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3051 in k3045 in k3021 in k2977 in k2975 in k2961 in k2959 in k2957 */
static void C_ccall f_3052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3052,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3055,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* csi.scm:518: software-version */
t3=C_fast_retrieve(lf[145]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4568 in k4566 in k4563 in k4561 in k4559 in doloop836 in k4545 */
static void C_ccall f_4570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=((C_word*)((C_word*)t0)[4])[1];
f_4551(t5,((C_word*)t0)[5],t2,t4);}

/* k2665 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* loop in k2040 in lookup-script-file in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static C_word C_fcall f_2016(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(C_SCHEME_FALSE);}
else{
t2=C_subchar(((C_word*)t0)[3],t1);
t3=C_i_char_equalp(t2,C_make_character(92));
t4=(C_truep(t3)?t3:C_i_char_equalp(t2,C_make_character(47)));
if(C_truep(t4)){
return(t1);}
else{
t5=C_fixnum_plus(t1,C_fix(1));
t7=t5;
t1=t7;
goto loop;}}}

/* map-loop649 */
static void C_fcall f_4059(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4059,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4084,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:727: g655 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3045 in k3021 in k2977 in k2975 in k2961 in k2959 in k2957 */
static void C_ccall f_3046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3046,2,t0,t1);}
t2=C_fudge(C_fix(3));
t3=(C_truep(t2)?lf[135]:lf[136]);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3052,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t3,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* csi.scm:517: software-type */
t5=C_fast_retrieve(lf[146]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k4052 */
static void C_ccall f_4054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4054,2,t0,t1);}
t2=C_a_i_list1(&a,1,C_fix(0));
/* csi.scm:727: append */
t3=*((C_word*)lf[238]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t1,t2);}

/* k3516 in k3505 in k3503 in k3501 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3517,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3522,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_3522(t5,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k2683 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2684,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_fast_retrieve(lf[110]);
t4=(C_truep(C_fast_retrieve(lf[110]))?C_fast_retrieve(lf[110]):C_SCHEME_END_OF_LIST);
t5=C_i_length(t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4732,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_symbolp(t1))){
t7=t6;
f_4732(t7,C_slot(t1,C_fix(1)));}
else{
if(C_truep(C_i_stringp(t1))){
t7=t6;
f_4732(t7,t1);}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4927,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:872: display */
t8=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,lf[117]);}}}

/* k3030 in k3028 in k3026 in k3024 in k3021 in k2977 in k2975 in k2961 in k2959 in k2957 */
static void C_ccall f_3031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* f_3544 in k3530 in doloop541 in k3516 in k3505 in k3503 in k3501 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in ... */
static void C_ccall f_3544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3544,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
/* csi.scm:643: write */
t3=*((C_word*)lf[185]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,((C_word*)t0)[3]);}

/* k2693 in k2691 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2694,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2696,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_list1(&a,1,t1);
/* csi.scm:383: history-add */
t4=C_fast_retrieve(lf[46]);
f_2130(3,t4,t2,t3);}

/* k2691 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2692,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2694,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:382: system */
t3=C_fast_retrieve(lf[102]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k2695 in k2693 in k2691 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3572 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_3502(2,t2,C_SCHEME_UNDEFINED);}
else{
/* csi.scm:626: display */
t2=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[196],((C_word*)t0)[3]);}}

/* k3569 in k3503 in k3501 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3571,2,t0,t1);}
t2=(C_truep(t1)?lf[188]:lf[189]);
t3=(C_truep(((C_word*)t0)[2])?lf[190]:lf[191]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3562,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
/* csi.scm:632: ##sys#symbol->qualified-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[193]))(3,*((C_word*)lf[193]+1),t4,((C_word*)t0)[5]);}
else{
/* csi.scm:633: ##sys#symbol->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[184]))(3,*((C_word*)lf[184]+1),t4,((C_word*)t0)[5]);}}

/* k4045 */
static void C_ccall f_4046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* f_4040 in k4022 in k3824 in k3714 in k3690 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in ... */
static void C_ccall f_4040(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word ab[19],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4040,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4046,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_fast_retrieve(lf[65]);
t9=C_i_cdr(t2);
t10=C_i_check_list_2(t9,lf[237]);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4054,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4059,a[2]=t7,a[3]=t13,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_4059(t15,t11,t9);}

/* doloop541 in k3516 in k3505 in k3503 in k3501 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 in ... */
static void C_fcall f_3522(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3522,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3531,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(t2);
/* csi.scm:639: fprintf */
t5=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,((C_word*)t0)[3],lf[186],t4);}}

/* k2632 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_main_entry_point
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(2602)){
C_save(t1);
C_rereclaim2(2602*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,408);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\006.csirc");
lf[2]=C_h_intern(&lf[2],27,"\003sysrepl-print-length-limit");
lf[3]=C_h_intern(&lf[3],4,"\000csi");
lf[4]=C_h_intern(&lf[4],12,"\003sysfeatures");
lf[5]=C_h_intern(&lf[5],19,"\003sysnotices-enabled");
lf[6]=C_h_intern(&lf[6],14,"editor-command");
lf[9]=C_h_intern(&lf[9],15,"\003csiprint-usage");
lf[10]=C_h_intern(&lf[10],7,"display");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\004V    -b  -batch                    terminate after command-line processing\012 "
"   -w  -no-warnings              disable all warnings\012    -K  -keyword-style STY"
"LE      enable alternative keyword-syntax\012                                   (pr"
"efix, suffix or none)\012        -no-parentheses-synonyms  disables list delimiter "
"synonyms\012        -no-symbol-escape         disables support for escaped symbols\012"
"        -r5rs-syntax              disables the Chicken extensions to\012           "
"                        R5RS syntax\012    -s  -script PATHNAME          use interp"
"reter for shell scripts\012        -ss PATHNAME              shell script with `mai"
"n\047 procedure\012        -sx PATHNAME              same as `-s\047, but print each expr"
"ession\012                                   as it is evaluated\012        -setup-mode"
"               prefer the current directory when locating extensions\012    -R  -re"
"quire-extension NAME   require extension and import before\012                     "
"              executing code\012    -I  -include-path PATHNAME    add PATHNAME to i"
"nclude path\012    --                            ignore all following options\012");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\000\003 \047\012");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000D    -n  -no-init                  do not load initialization file ` ");
lf[14]=C_h_intern(&lf[14],19,"\003sysprint-to-string");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\003\052usage: csi [FILENAME | OPTION ...]\012\012  `csi\047 is the CHICKEN interpreter.\012  \012"
"  FILENAME is a Scheme source file name with optional extension. OPTION may be\012 "
" one of the following:\012\012    -h  -help  --help             display this text and "
"exit\012        -version                  display version and exit\012        -release"
"                  print release number and exit\012    -i  -case-insensitive       "
"  enable case-insensitive reading\012    -e  -eval EXPRESSION          evaluate giv"
"en expression\012    -p  -print EXPRESSION         evaluate and print result(s)\012   "
" -P  -pretty-print EXPRESSION  evaluate and print result(s) prettily\012    -D  -fe"
"ature SYMBOL           register feature identifier\012        -no-feature SYMBOL   "
"     disable built-in feature identifier\012    -q  -quiet                    do no"
"t print banner\012");
lf[16]=C_h_intern(&lf[16],16,"\003csiprint-banner");
lf[17]=C_h_intern(&lf[17],5,"print");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000C(c) 2008-2013, The Chicken Team\012(c) 2000-2007, Felix L. Winkelmann\012");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[20]=C_h_intern(&lf[20],15,"chicken-version");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\007CHICKEN");
lf[22]=C_h_intern(&lf[22],7,"newline");
lf[23]=C_h_intern(&lf[23],18,"\003sysuser-read-hook");
lf[24]=C_h_intern(&lf[24],5,"quote");
lf[25]=C_h_intern(&lf[25],17,"\003csihistory-count");
lf[26]=C_h_intern(&lf[26],15,"\003csihistory-ref");
lf[27]=C_h_intern(&lf[27],21,"\003syssharp-number-hook");
lf[29]=C_h_intern(&lf[29],18,"\003csichop-separator");
lf[30]=C_h_intern(&lf[30],9,"substring");
lf[31]=C_h_intern(&lf[31],1,"@");
lf[32]=C_h_intern(&lf[32],25,"\003syspeek-nonnull-c-string");
lf[33]=C_h_intern(&lf[33],12,"file-exists\077");
lf[34]=C_h_intern(&lf[34],17,"\003sysstring-append");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\004.bat");
lf[36]=C_h_intern(&lf[36],22,"\003csilookup-script-file");
lf[37]=C_h_intern(&lf[37],13,"string-append");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[39]=C_h_intern(&lf[39],12,"string-split");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\001;");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[42]=C_h_intern(&lf[42],24,"get-environment-variable");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\004PATH");
lf[44]=C_h_intern(&lf[44],16,"\003csihistory-list");
lf[45]=C_h_intern(&lf[45],13,"vector-resize");
lf[46]=C_h_intern(&lf[46],15,"\003csihistory-add");
lf[47]=C_h_intern(&lf[47],19,"\003sysundefined-value");
lf[48]=C_h_intern(&lf[48],17,"\003csihistory-clear");
lf[49]=C_h_intern(&lf[49],12,"vector-fill!");
lf[50]=C_h_intern(&lf[50],16,"\003csihistory-show");
lf[51]=C_h_intern(&lf[51],19,"\003sysstandard-output");
lf[52]=C_h_intern(&lf[52],9,"\003sysprint");
lf[53]=C_h_intern(&lf[53],27,"\003syswith-print-length-limit");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[55]=C_h_intern(&lf[55],19,"\003syswrite-char/port");
lf[56]=C_h_intern(&lf[56],9,"\003syserror");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000 history entry index out of range");
lf[58]=C_h_intern(&lf[58],14,"\003csitty-input\077");
lf[59]=C_h_intern(&lf[59],13,"\003systty-port\077");
lf[60]=C_h_intern(&lf[60],18,"\003sysstandard-input");
lf[61]=C_h_intern(&lf[61],18,"\003sysbreak-on-error");
lf[62]=C_h_intern(&lf[62],20,"\003sysread-prompt-hook");
lf[64]=C_h_intern(&lf[64],16,"toplevel-command");
lf[65]=C_h_intern(&lf[65],4,"eval");
lf[66]=C_h_intern(&lf[66],12,"load-noisily");
lf[67]=C_h_intern(&lf[67],9,"read-line");
lf[68]=C_h_intern(&lf[68],6,"expand");
lf[69]=C_h_intern(&lf[69],12,"pretty-print");
lf[70]=C_h_intern(&lf[70],6,"values");
lf[72]=C_h_intern(&lf[72],4,"exit");
lf[73]=C_h_intern(&lf[73],1,"x");
lf[74]=C_h_intern(&lf[74],16,"\003sysstrip-syntax");
lf[75]=C_h_intern(&lf[75],4,"read");
lf[76]=C_h_intern(&lf[76],1,"p");
lf[77]=C_h_intern(&lf[77],1,"d");
lf[78]=C_h_intern(&lf[78],12,"\003csidescribe");
lf[79]=C_h_intern(&lf[79],2,"du");
lf[80]=C_h_intern(&lf[80],8,"\003csidump");
lf[81]=C_h_intern(&lf[81],3,"dur");
lf[82]=C_h_intern(&lf[82],1,"r");
lf[83]=C_h_intern(&lf[83],10,"\003csireport");
lf[84]=C_h_intern(&lf[84],1,"q");
lf[85]=C_h_intern(&lf[85],13,"\003sysquit-hook");
lf[86]=C_h_intern(&lf[86],1,"l");
lf[87]=C_h_intern(&lf[87],4,"load");
lf[88]=C_h_intern(&lf[88],2,"ln");
lf[89]=C_h_intern(&lf[89],6,"print\052");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\004==> ");
lf[91]=C_h_intern(&lf[91],8,"\000printer");
lf[92]=C_h_intern(&lf[92],8,"for-each");
lf[93]=C_h_intern(&lf[93],1,"t");
lf[94]=C_h_intern(&lf[94],17,"\003sysdisplay-times");
lf[95]=C_h_intern(&lf[95],14,"\003sysstop-timer");
lf[96]=C_h_intern(&lf[96],15,"\003sysstart-timer");
lf[97]=C_h_intern(&lf[97],3,"exn");
lf[98]=C_h_intern(&lf[98],18,"\003syslast-exception");
lf[99]=C_h_intern(&lf[99],1,"e");
lf[100]=C_h_intern(&lf[100],6,"printf");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000,editor returned with non-zero exit status ~a");
lf[102]=C_h_intern(&lf[102],6,"system");
lf[103]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[104]=C_h_intern(&lf[104],2,"ch");
lf[105]=C_h_intern(&lf[105],1,"h");
lf[106]=C_h_intern(&lf[106],1,"c");
lf[108]=C_h_intern(&lf[108],1,"f");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\016no such frame\012");
lf[110]=C_h_intern(&lf[110],26,"\003sysrepl-recent-call-chain");
lf[111]=C_h_intern(&lf[111],1,"g");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000\027no environment in frame");
lf[113]=C_h_intern(&lf[113],9,"frameinfo");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000\012; getting ");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000\022no such variable: ");
lf[116]=C_h_intern(&lf[116],7,"call/cc");
lf[117]=C_decode_literal(C_heaptop,"\376B\000\000#string or symbol required for `,g\047\012");
lf[118]=C_h_intern(&lf[118],1,"s");
lf[119]=C_h_intern(&lf[119],1,"\077");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000\002 ,");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\003\266Toplevel commands:\012\012 ,\077                Show this text\012 ,p EXP            Pr"
"etty print evaluated expression EXP\012 ,d EXP            Describe result of evalua"
"ted expression EXP\012 ,du EXP           Dump data of expression EXP\012 ,dur EXP N   "
"     Dump range\012 ,q                Quit interpreter\012 ,l FILENAME ...   Load one "
"or more files\012 ,ln FILENAME ...  Load one or more files and print result of each"
" top-level expression\012 ,r                Show system information\012 ,h            "
"    Show history of expression results\012 ,ch               Clear history of expre"
"ssion results\012 ,e FILENAME       Run external editor\012 ,s TEXT ...       Execute "
"shell-command\012 ,exn              Describe last exception\012 ,c                Show"
" call-chain of most recent error\012 ,f N              Select frame N\012 ,g NAME     "
"      Get variable NAME from current frame\012 ,t EXP            Evaluate form and "
"print elapsed time\012 ,x EXP            Pretty print expanded expression EXP\012");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\0005undefined toplevel command ~s - enter `,\077\047 for help~%");
lf[123]=C_h_intern(&lf[123],7,"unquote");
lf[124]=C_h_intern(&lf[124],4,"chop");
lf[125]=C_h_intern(&lf[125],4,"sort");
lf[126]=C_h_intern(&lf[126],19,"with-output-to-port");
lf[127]=C_h_intern(&lf[127],4,"argv");
lf[128]=C_h_intern(&lf[128],8,"truncate");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[130]=C_h_intern(&lf[130],11,"make-string");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\004  ~a");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\025symbol gc is enabled\012");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\027interrupts are enabled\012");
lf[134]=C_h_intern(&lf[134],16,"\003syswrite-char-0");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\010(64-bit)");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000\010 (fixed)");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[139]=C_decode_literal(C_heaptop,"\376B\000\000\010downward");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000\006upward");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\002\207~%~%~\012                   Machine type:    \011~A ~A~%~\012                   Soft"
"ware type:   \011~A~%~\012                   Software version:\011~A~%~\012                 "
"  Build platform:  \011~A~%~\012                   Installation prefix:\011~A~%~\012        "
"           Extension path:  \011~A~%~\012                   Include path:    \011~A~%~\012  "
"                 Symbol-table load:\011~S~%  ~\012                     Avg bucket leng"
"th:\011~S~%  ~\012                     Total symbol count:\011~S~%~\012                   Me"
"mory:\011heap size is ~S bytes~A with ~S bytes currently in use~%~  \012              "
"       nursery size is ~S bytes, stack grows ~A~%~\012                   Command li"
"ne:    \011~S~%");
lf[142]=C_h_intern(&lf[142],21,"\003sysinclude-pathnames");
lf[143]=C_h_intern(&lf[143],15,"repository-path");
lf[144]=C_h_intern(&lf[144],14,"build-platform");
lf[145]=C_h_intern(&lf[145],16,"software-version");
lf[146]=C_h_intern(&lf[146],13,"software-type");
lf[147]=C_h_intern(&lf[147],12,"machine-type");
lf[148]=C_h_intern(&lf[148],15,"keyword->string");
lf[149]=C_h_intern(&lf[149],8,"string<\077");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000\015Features:~%~%");
lf[151]=C_h_intern(&lf[151],17,"memory-statistics");
lf[152]=C_h_intern(&lf[152],21,"\003syssymbol-table-info");
lf[153]=C_h_intern(&lf[153],2,"gc");
lf[155]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010u8vector\376\003\000\000\002\376B\000\000\030vector of unsigned bytes\376\003\000\000\002\376\001\000\000\017u8vector-leng"
"th\376\003\000\000\002\376\001\000\000\014u8vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010s8vector\376\003\000\000\002\376B\000\000\026vector of signed byt"
"es\376\003\000\000\002\376\001\000\000\017s8vector-length\376\003\000\000\002\376\001\000\000\014s8vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011u16vector\376\003\000\000"
"\002\376B\000\000\037vector of unsigned 16-bit words\376\003\000\000\002\376\001\000\000\020u16vector-length\376\003\000\000\002\376\001\000\000\015u16vect"
"or-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011s16vector\376\003\000\000\002\376B\000\000\035vector of signed 16-bit words\376\003\000\000\002\376\001\000"
"\000\020s16vector-length\376\003\000\000\002\376\001\000\000\015s16vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011u32vector\376\003\000\000\002\376B\000\000\037ve"
"ctor of unsigned 32-bit words\376\003\000\000\002\376\001\000\000\020u32vector-length\376\003\000\000\002\376\001\000\000\015u32vector-ref\376\377"
"\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011s32vector\376\003\000\000\002\376B\000\000\035vector of signed 32-bit words\376\003\000\000\002\376\001\000\000\020s32vec"
"tor-length\376\003\000\000\002\376\001\000\000\015s32vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011f32vector\376\003\000\000\002\376B\000\000\027vector of "
"32-bit floats\376\003\000\000\002\376\001\000\000\020f32vector-length\376\003\000\000\002\376\001\000\000\015f32vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011"
"f64vector\376\003\000\000\002\376B\000\000\027vector of 64-bit floats\376\003\000\000\002\376\001\000\000\020f64vector-length\376\003\000\000\002\376\001\000\000\015f6"
"4vector-ref\376\377\016\376\377\016");
lf[157]=C_h_intern(&lf[157],6,"length");
lf[158]=C_h_intern(&lf[158],8,"list-ref");
lf[159]=C_h_intern(&lf[159],10,"string-ref");
lf[160]=C_h_intern(&lf[160],7,"fprintf");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000 ~% (~A elements not displayed)~%");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000.\011(followed by ~A identical instance~a)~% ...~%");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\001s");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\007 ~S: ~S");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\021~A of length ~S~%");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000$character ~S, code: ~S, #x~X, #o~O~%");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000\016boolean true~%");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000\017boolean false~%");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000\014empty list~%");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\024end-of-file object~%");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\024unspecified object~%");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000\016, character ~S");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000(exact integer ~S~%  #x~X~%  #o~O~%  #b~B");
lf[175]=C_h_intern(&lf[175],28,"\003sysarbitrary-unbound-symbol");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\017unbound value~%");
lf[177]=C_decode_literal(C_heaptop,"\376B\000\000\023inexact number ~S~%");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\013number ~S~%");
lf[179]=C_decode_literal(C_heaptop,"\376B\000\000\006string");
lf[180]=C_h_intern(&lf[180],8,"\003syssize");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\006vector");
lf[182]=C_h_intern(&lf[182],8,"\003sysslot");
lf[183]=C_decode_literal(C_heaptop,"\376B\000\000\035keyword symbol with name ~s~%");
lf[184]=C_h_intern(&lf[184],18,"\003syssymbol->string");
lf[185]=C_h_intern(&lf[185],5,"write");
lf[186]=C_decode_literal(C_heaptop,"\376B\000\000\005  ~s\011");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\020  \012properties:\012\012");
lf[188]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000\013uninterned ");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000\012qualified ");
lf[191]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\031~a~asymbol with name ~S~%");
lf[193]=C_h_intern(&lf[193],28,"\003syssymbol->qualified-string");
lf[194]=C_h_intern(&lf[194],20,"\003sysinterned-symbol\077");
lf[195]=C_h_intern(&lf[195],21,"\003sysqualified-symbol\077");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\010unbound ");
lf[197]=C_h_intern(&lf[197],32,"\003syssymbol-has-toplevel-binding\077");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\005eol~%");
lf[199]=C_decode_literal(C_heaptop,"\376B\000\000\012(circle)~%");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\006~S -> ");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000\024circular structure: ");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\000\004list");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\000\036pair with car ~S~%and cdr ~S~%");
lf[204]=C_h_intern(&lf[204],7,"sprintf");
lf[205]=C_decode_literal(C_heaptop,"\376B\000\000 procedure with code pointer 0x~X");
lf[206]=C_h_intern(&lf[206],25,"\003syspeek-unsigned-integer");
lf[207]=C_decode_literal(C_heaptop,"\376B\000\000\005input");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000\006output");
lf[209]=C_decode_literal(C_heaptop,"\376B\000\0005~A port of type ~A with name ~S and file pointer ~X~%");
lf[210]=C_decode_literal(C_heaptop,"\376B\000\000/locative~%  pointer ~X~%  index ~A~%  type ~A~%");
lf[211]=C_decode_literal(C_heaptop,"\376B\000\000\004slot");
lf[212]=C_decode_literal(C_heaptop,"\376B\000\000\004char");
lf[213]=C_decode_literal(C_heaptop,"\376B\000\000\010u8vector");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\000\010s8vector");
lf[215]=C_decode_literal(C_heaptop,"\376B\000\000\011u16vector");
lf[216]=C_decode_literal(C_heaptop,"\376B\000\000\011s16vector");
lf[217]=C_decode_literal(C_heaptop,"\376B\000\000\011u32vector");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\011s32vector");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000\011f32vector");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000\011f64vector");
lf[221]=C_decode_literal(C_heaptop,"\376B\000\000\024machine pointer ~X~%");
lf[222]=C_h_intern(&lf[222],11,"\003csihexdump");
lf[223]=C_h_intern(&lf[223],8,"\003sysbyte");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\022blob of size ~S:~%");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\000\030lambda information: ~s~%");
lf[226]=C_h_intern(&lf[226],23,"\003syslambda-info->string");
lf[227]=C_h_intern(&lf[227],10,"hash-table");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\013 ~S\011-> ~S~%");
lf[229]=C_decode_literal(C_heaptop,"\376B\000\000\025  hash function: ~a~%");
lf[230]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[231]=C_decode_literal(C_heaptop,"\376B\000\000\001s");
lf[232]=C_decode_literal(C_heaptop,"\376B\000\000:hash-table with ~S element~a~%  comparison procedure: ~A~%");
lf[233]=C_h_intern(&lf[233],9,"condition");
lf[234]=C_decode_literal(C_heaptop,"\376B\000\000\007\011~s: ~s");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000\005 ~s~%");
lf[236]=C_decode_literal(C_heaptop,"\376B\000\000\017condition: ~s~%");
lf[237]=C_h_intern(&lf[237],3,"map");
lf[238]=C_h_intern(&lf[238],6,"append");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000\031structure of type `~S\047:~%");
lf[240]=C_h_intern(&lf[240],18,"\003syshash-table-ref");
lf[241]=C_decode_literal(C_heaptop,"\376B\000\000\020unknown object~%");
lf[242]=C_h_intern(&lf[242],15,"\003sysbytevector\077");
lf[243]=C_h_intern(&lf[243],13,"\003syslocative\077");
lf[244]=C_h_intern(&lf[244],5,"port\077");
lf[245]=C_h_intern(&lf[245],8,"keyword\077");
lf[246]=C_decode_literal(C_heaptop,"\376B\000\000\034statically allocated (0x~X) ");
lf[247]=C_h_intern(&lf[247],17,"\003sysblock-address");
lf[248]=C_h_intern(&lf[248],14,"set-describer!");
lf[249]=C_h_intern(&lf[249],19,"\003syshash-table-set!");
lf[250]=C_h_intern(&lf[250],3,"min");
lf[251]=C_h_intern(&lf[251],4,"dump");
lf[252]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot dump immediate object");
lf[253]=C_h_intern(&lf[253],13,"\003syspeek-byte");
lf[254]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot dump object");
lf[255]=C_decode_literal(C_heaptop,"\376B\000\000\003   ");
lf[256]=C_decode_literal(C_heaptop,"\376B\000\000\004:\011  ");
lf[257]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[258]=C_decode_literal(C_heaptop,"\376B\000\000\006  ---\012");
lf[259]=C_decode_literal(C_heaptop,"\376B\000\000\002] ");
lf[260]=C_decode_literal(C_heaptop,"\376B\000\000\003\011  ");
lf[261]=C_decode_literal(C_heaptop,"\376B\000\000\002[]");
lf[262]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[263]=C_h_intern(&lf[263],23,"\003sysuser-interrupt-hook");
lf[264]=C_h_intern(&lf[264],17,"\003syssignal-vector");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\002-s");
lf[268]=C_decode_literal(C_heaptop,"\376B\000\000\003-ss");
lf[269]=C_decode_literal(C_heaptop,"\376B\000\000\007-script");
lf[270]=C_decode_literal(C_heaptop,"\376B\000\000\003-sx");
lf[271]=C_decode_literal(C_heaptop,"\376B\000\000\002--");
lf[272]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid option");
lf[273]=C_h_intern(&lf[273],16,"\003sysstring->list");
lf[274]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\003-ss\376\003\000\000\002\376B\000\000\003-sx\376\003\000\000\002\376B\000\000\007-script\376\003\000\000\002\376B\000\000\010-version\376\003\000\000\002\376B\000\000\005-help\376\003\000\000"
"\002\376B\000\000\006--help\376\003\000\000\002\376B\000\000\010-feature\376\003\000\000\002\376B\000\000\013-no-feature\376\003\000\000\002\376B\000\000\005-eval\376\003\000\000\002\376B\000\000\021-cas"
"e-insensitive\376\003\000\000\002\376B\000\000\016-keyword-style\376\003\000\000\002\376B\000\000\030-no-parentheses-synonyms\376\003\000\000\002\376B\000\000"
"\021-no-symbol-escape\376\003\000\000\002\376B\000\000\014-r5rs-syntax\376\003\000\000\002\376B\000\000\013-setup-mode\376\003\000\000\002\376B\000\000\022-require-"
"extension\376\003\000\000\002\376B\000\000\006-batch\376\003\000\000\002\376B\000\000\006-quiet\376\003\000\000\002\376B\000\000\014-no-warnings\376\003\000\000\002\376B\000\000\010-no-ini"
"t\376\003\000\000\002\376B\000\000\015-include-path\376\003\000\000\002\376B\000\000\010-release\376\003\000\000\002\376B\000\000\006-print\376\003\000\000\002\376B\000\000\015-pretty-prin"
"t\376\003\000\000\002\376B\000\000\002--\376\377\016");
lf[275]=C_h_intern(&lf[275],7,"\003csirun");
lf[276]=C_decode_literal(C_heaptop,"\376B\000\000\047missing argument to command-line option");
lf[277]=C_h_intern(&lf[277],8,"\003syslist");
lf[278]=C_h_intern(&lf[278],17,"open-input-string");
lf[279]=C_h_intern(&lf[279],17,"register-feature!");
lf[280]=C_h_intern(&lf[280],19,"unregister-feature!");
lf[281]=C_h_intern(&lf[281],4,"repl");
lf[282]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002--\376\003\000\000\002\376B\000\000\002-b\376\003\000\000\002\376B\000\000\006-batch\376\003\000\000\002\376B\000\000\002-q\376\003\000\000\002\376B\000\000\006-quiet\376\003\000\000\002\376B\000\000\002-n"
"\376\003\000\000\002\376B\000\000\010-no-init\376\003\000\000\002\376B\000\000\002-w\376\003\000\000\002\376B\000\000\014-no-warnings\376\003\000\000\002\376B\000\000\002-i\376\003\000\000\002\376B\000\000\021-case-"
"insensitive\376\003\000\000\002\376B\000\000\030-no-parentheses-synonyms\376\003\000\000\002\376B\000\000\021-no-symbol-escape\376\003\000\000\002\376B\000"
"\000\014-r5rs-syntax\376\003\000\000\002\376B\000\000\013-setup-mode\376\003\000\000\002\376B\000\000\003-ss\376\003\000\000\002\376B\000\000\003-sx\376\003\000\000\002\376B\000\000\002-s\376\003\000\000\002\376B"
"\000\000\007-script\376\377\016");
lf[283]=C_decode_literal(C_heaptop,"\376B\000\000\002-D");
lf[284]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[285]=C_decode_literal(C_heaptop,"\376B\000\000\002-I");
lf[286]=C_decode_literal(C_heaptop,"\376B\000\000\015-include-path");
lf[287]=C_decode_literal(C_heaptop,"\376B\000\000\002-K");
lf[288]=C_decode_literal(C_heaptop,"\376B\000\000\016-keyword-style");
lf[289]=C_decode_literal(C_heaptop,"\376B\000\000\013-no-feature");
lf[290]=C_decode_literal(C_heaptop,"\376B\000\000\002-R");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000\022-require-extension");
lf[292]=C_h_intern(&lf[292],22,"\004corerequire-extension");
lf[293]=C_h_intern(&lf[293],14,"string->symbol");
lf[294]=C_decode_literal(C_heaptop,"\376B\000\000\002-e");
lf[295]=C_decode_literal(C_heaptop,"\376B\000\000\005-eval");
lf[296]=C_decode_literal(C_heaptop,"\376B\000\000\002-p");
lf[297]=C_decode_literal(C_heaptop,"\376B\000\000\006-print");
lf[298]=C_decode_literal(C_heaptop,"\376B\000\000\002-P");
lf[299]=C_decode_literal(C_heaptop,"\376B\000\000\015-pretty-print");
lf[300]=C_decode_literal(C_heaptop,"\376B\000\000\003-ss");
lf[301]=C_h_intern(&lf[301],4,"main");
lf[302]=C_h_intern(&lf[302],22,"command-line-arguments");
lf[303]=C_decode_literal(C_heaptop,"\376B\000\000\003-sx");
lf[304]=C_h_intern(&lf[304],18,"\003sysstandard-error");
lf[305]=C_decode_literal(C_heaptop,"\376B\000\000\002; ");
lf[306]=C_decode_literal(C_heaptop,"\376B\000\000\003\012; ");
lf[307]=C_h_intern(&lf[307],12,"flush-output");
lf[308]=C_h_intern(&lf[308],21,"with-output-to-string");
lf[309]=C_h_intern(&lf[309],8,"\003sysload");
lf[310]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[311]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[312]=C_decode_literal(C_heaptop,"\376B\000\000\004HOME");
lf[313]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-n\376\003\000\000\002\376B\000\000\010-no-init\376\377\016");
lf[314]=C_h_intern(&lf[314],13,"symbol-escape");
lf[315]=C_h_intern(&lf[315],20,"parentheses-synonyms");
lf[316]=C_h_intern(&lf[316],13,"keyword-style");
lf[317]=C_h_intern(&lf[317],5,"\000none");
lf[318]=C_h_intern(&lf[318],14,"case-sensitive");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000/Disabled the Chicken extensions to R5RS syntax\012");
lf[320]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\014-r5rs-syntax\376\377\016");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000%Disabled support for escaped symbols\012");
lf[322]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\021-no-symbol-escape\376\377\016");
lf[323]=C_decode_literal(C_heaptop,"\376B\000\000\052Disabled support for parentheses synonyms\012");
lf[324]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\030-no-parentheses-synonyms\376\377\016");
lf[325]=C_decode_literal(C_heaptop,"\376B\000\000\006prefix");
lf[326]=C_h_intern(&lf[326],7,"\000prefix");
lf[327]=C_decode_literal(C_heaptop,"\376B\000\000\004none");
lf[328]=C_decode_literal(C_heaptop,"\376B\000\000\006suffix");
lf[329]=C_h_intern(&lf[329],7,"\000suffix");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000+missing argument to `-keyword-style\047 option");
lf[331]=C_h_intern(&lf[331],10,"\003sysnodups");
lf[332]=C_h_intern(&lf[332],8,"string=\077");
lf[333]=C_decode_literal(C_heaptop,"\376B\000\000\002-I");
lf[334]=C_decode_literal(C_heaptop,"\376B\000\000\015-include-path");
lf[335]=C_decode_literal(C_heaptop,"\376B\000\000\013-no-feature");
lf[336]=C_decode_literal(C_heaptop,"\376B\000\000\002-D");
lf[337]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[338]=C_h_intern(&lf[338],16,"case-insensitive");
lf[339]=C_decode_literal(C_heaptop,"\376B\000\000-Identifiers and symbols are case insensitive\012");
lf[340]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-i\376\003\000\000\002\376B\000\000\021-case-insensitive\376\377\016");
lf[341]=C_h_intern(&lf[341],12,"load-verbose");
lf[342]=C_h_intern(&lf[342],20,"\003syswarnings-enabled");
lf[343]=C_decode_literal(C_heaptop,"\376B\000\000\026Warnings are disabled\012");
lf[344]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-w\376\003\000\000\002\376B\000\000\014-no-warnings\376\377\016");
lf[345]=C_decode_literal(C_heaptop,"\376B\000\000\010-release");
lf[346]=C_decode_literal(C_heaptop,"\376B\000\000\013-setup-mode");
lf[347]=C_h_intern(&lf[347],14,"\003syssetup-mode");
lf[348]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-v\376\003\000\000\002\376B\000\000\010-version\376\377\016");
lf[349]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-h\376\003\000\000\002\376B\000\000\005-help\376\003\000\000\002\376B\000\000\006--help\376\377\016");
lf[350]=C_decode_literal(C_heaptop,"\376B\000\000\001;");
lf[351]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[352]=C_decode_literal(C_heaptop,"\376B\000\000\024CHICKEN_INCLUDE_PATH");
lf[353]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-q\376\003\000\000\002\376B\000\000\006-quiet\376\377\016");
lf[354]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-b\376\003\000\000\002\376B\000\000\006-batch\376\377\016");
lf[355]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-e\376\003\000\000\002\376B\000\000\002-p\376\003\000\000\002\376B\000\000\002-P\376\003\000\000\002\376B\000\000\005-eval\376\003\000\000\002\376B\000\000\006-print\376\003\000\000\002\376B\000\000\015-pr"
"etty-print\376\377\016");
lf[356]=C_h_intern(&lf[356],20,"\003syswindows-platform");
lf[357]=C_h_intern(&lf[357],14,"chicken-script");
lf[358]=C_h_intern(&lf[358],6,"script");
lf[359]=C_h_intern(&lf[359],12,"program-name");
lf[360]=C_decode_literal(C_heaptop,"\376B\000\000\042missing or invalid script argument");
lf[361]=C_decode_literal(C_heaptop,"\376B\000\000\002--");
lf[362]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\003-ss\376\003\000\000\002\376B\000\000\003-sx\376\003\000\000\002\376B\000\000\002-s\376\003\000\000\002\376B\000\000\007-script\376\377\016");
lf[363]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-K\376\003\000\000\002\376B\000\000\016-keyword-style\376\377\016");
lf[364]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[365]=C_h_intern(&lf[365],17,"get-output-string");
lf[366]=C_h_intern(&lf[366],18,"open-output-string");
lf[367]=C_decode_literal(C_heaptop,"\376B\000\000\025invalid option syntax");
lf[368]=C_h_intern(&lf[368],7,"reverse");
lf[369]=C_h_intern(&lf[369],22,"with-exception-handler");
lf[370]=C_h_intern(&lf[370],30,"call-with-current-continuation");
lf[371]=C_decode_literal(C_heaptop,"\376B\000\000\013CSI_OPTIONS");
lf[372]=C_h_intern(&lf[372],25,"\003sysimplicit-exit-handler");
lf[373]=C_h_intern(&lf[373],28,"\003sysextend-macro-environment");
lf[374]=C_h_intern(&lf[374],10,"defhandler");
lf[375]=C_decode_literal(C_heaptop,"\376B\000\000\032C_establish_signal_handler");
lf[376]=C_h_intern(&lf[376],11,"\003syssetslot");
lf[377]=C_h_intern(&lf[377],11,"\004coreinline");
lf[378]=C_h_intern(&lf[378],5,"begin");
lf[379]=C_h_intern(&lf[379],25,"\003syssyntax-rules-mismatch");
lf[380]=C_h_intern(&lf[380],18,"\003syser-transformer");
lf[381]=C_h_intern(&lf[381],23,"\003syscurrent-environment");
lf[382]=C_h_intern(&lf[382],11,"make-vector");
lf[383]=C_h_intern(&lf[383],17,"\003syspeek-c-string");
lf[384]=C_decode_literal(C_heaptop,"\376B\000\000\016CHICKEN_PREFIX");
lf[385]=C_decode_literal(C_heaptop,"\376B\000\000$; switching current module to `~a\047~%");
lf[386]=C_h_intern(&lf[386],17,"\003sysswitch-module");
lf[387]=C_decode_literal(C_heaptop,"\376B\000\000\027undefined module `~a\047~%");
lf[388]=C_h_intern(&lf[388],15,"\003sysfind-module");
lf[389]=C_h_intern(&lf[389],23,"\003sysresolve-module-name");
lf[390]=C_decode_literal(C_heaptop,"\376B\000\000\032invalid module name `~a\047~%");
lf[391]=C_decode_literal(C_heaptop,"\376B\000\000(; resetting current module to toplevel~%");
lf[392]=C_h_intern(&lf[392],18,"\003sysstring->symbol");
lf[393]=C_h_intern(&lf[393],1,"m");
lf[394]=C_decode_literal(C_heaptop,"\376B\000\0005,m MODULE         switch to module with name `MODULE\047");
lf[395]=C_decode_literal(C_heaptop,"\376B\000\000\010#;~A~A> ");
lf[396]=C_decode_literal(C_heaptop,"\376B\000\000\003~a:");
lf[397]=C_h_intern(&lf[397],15,"\003sysmodule-name");
lf[398]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[399]=C_h_intern(&lf[399],18,"\003syscurrent-module");
lf[400]=C_h_intern(&lf[400],11,"repl-prompt");
lf[401]=C_h_intern(&lf[401],15,"\003sysmake-string");
lf[402]=C_decode_literal(C_heaptop,"\376B\000\000\013emacsclient");
lf[403]=C_decode_literal(C_heaptop,"\376B\000\000\002vi");
lf[404]=C_decode_literal(C_heaptop,"\376B\000\000\005EMACS");
lf[405]=C_decode_literal(C_heaptop,"\376B\000\000\006VISUAL");
lf[406]=C_decode_literal(C_heaptop,"\376B\000\000\006EDITOR");
lf[407]=C_h_intern(&lf[407],14,"make-parameter");
C_register_lf2(lf,408,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1828,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_3585(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3585,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3587,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:646: fprintf */
t3=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],lf[201]);}
else{
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
/* csi.scm:656: descseq */
t2=((C_word*)t0)[5];
f_3242(6,t2,((C_word*)t0)[4],lf[202],((C_word*)t0)[6],((C_word*)t0)[7],C_fix(0));}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
/* csi.scm:657: fprintf */
t6=*((C_word*)lf[160]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,((C_word*)t0)[4],((C_word*)t0)[3],lf[203],t3,t5);}
else{
if(C_truep(C_i_closurep(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3683,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3686,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:661: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_symbol_proc(lf[206]))(4,*((C_word*)lf[206]+1),t3,((C_word*)t0)[2],C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3692,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:663: port? */
t3=C_fast_retrieve(lf[244]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}}}}}

/* k3586 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3587,2,t0,t1);}
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3595,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_3595(t6,((C_word*)t0)[4],((C_word*)t0)[2],t2);}

/* k3561 in k3569 in k3503 in k3501 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:628: fprintf */
t2=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[192],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2671 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2672,2,t0,t1);}
t2=C_i_numberp(t1);
t3=C_i_not(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4683,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_4683(t5,t3);}
else{
t5=C_i_not(C_fast_retrieve(lf[110]));
if(C_truep(t5)){
t6=t4;
f_4683(t6,t5);}
else{
t6=C_fixnum_lessp(t1,C_fix(0));
if(C_truep(t6)){
t7=t4;
f_4683(t7,t6);}
else{
t7=C_i_length(C_fast_retrieve(lf[110]));
t8=t4;
f_4683(t8,C_fixnum_greater_or_equal_p(t1,t7));}}}}

/* k5894 in k5891 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in ... */
static void C_ccall f_5895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1030: exit */
t2=C_fast_retrieve(lf[72]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k5891 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in ... */
static void C_ccall f_5893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5893,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5895,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1029: print-usage */
t3=C_fast_retrieve(lf[9]);
f_1858(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
f_5303(2,t2,C_SCHEME_UNDEFINED);}}

/* loop-print in k3586 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_3595(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3595,NULL,4,t0,t1,t2,t3);}
t4=C_i_not_pair_p(t2);
t5=(C_truep(t4)?t4:C_i_nullp(t2));
if(C_truep(t5)){
/* csi.scm:650: printf */
t6=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,lf[198]);}
else{
t6=C_i_car(t2);
if(C_truep(C_i_memq(t6,t3))){
/* csi.scm:652: fprintf */
t7=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,((C_word*)t0)[2],lf[199]);}
else{
t7=t2;
t8=C_u_i_car(t7);
if(C_truep(C_i_memq(t8,t3))){
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3624,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t10=t2;
t11=C_u_i_car(t10);
/* csi.scm:654: fprintf */
t12=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t9,((C_word*)t0)[2],lf[200],t11);}}}}

/* k2599 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=t1;
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
/* csi.scm:365: printf */
t4=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],lf[101],t1);}}

/* k5886 in k5883 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in ... */
static void C_ccall f_5887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1035: exit */
t2=C_fast_retrieve(lf[72]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k5883 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in ... */
static void C_ccall f_5885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5885,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5887,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1034: print-banner */
t3=C_fast_retrieve(lf[16]);
f_1881(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
f_5305(2,t2,C_SCHEME_UNDEFINED);}}

/* loop1 in k3247 in k3354 in descseq in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_3253(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3253,NULL,3,t0,t1,t2);}
t3=C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_fixnum_greater_or_equal_p(t2,C_fix(40)))){
t4=C_fixnum_difference(((C_word*)t0)[2],t2);
/* csi.scm:583: fprintf */
t5=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,((C_word*)t0)[3],lf[161],t4);}
else{
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3274,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
t5=C_fixnum_plus(((C_word*)t0)[4],t2);
/* csi.scm:585: pref */
t6=((C_word*)t0)[6];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t4,((C_word*)t0)[7],t5);}}}

/* f_2495 */
static void C_ccall f_2495(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2495,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2498,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:348: pretty-print */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2497 */
static void C_ccall f_2498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:348: print* */
t2=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[90]);}

/* k2615 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:360: system */
t2=C_fast_retrieve(lf[102]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2618 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2619,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f6730,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:363: read-line */
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=C_retrieve2(lf[8],"default-editor");
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6734,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:363: read-line */
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5619 in k5617 in k5615 in k5612 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in ... */
static void C_ccall f_5620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5620,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5622,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1080: parentheses-synonyms */
t3=C_fast_retrieve(lf[315]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_FALSE);}

/* k5621 in k5619 in k5617 in k5615 in k5612 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in ... */
static void C_ccall f_5622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1081: symbol-escape */
t2=C_fast_retrieve(lf[314]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k3247 in k3354 in descseq in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3248,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3253,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_3253(t5,((C_word*)t0)[7],C_fix(0));}

/* descseq in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3242(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3242,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3355,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* csi.scm:578: plen */
t7=t3;
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,t6,((C_word*)t0)[3]);}

/* k2467 in for-each-loop235 in k2450 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2459(t3,((C_word*)t0)[4],t2);}

/* ##csi#describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3235(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr3r,(void*)f_3235r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3235r(t0,t1,t2,t3);}}

static void C_ccall f_3235r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(17);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[51]+1):C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3242,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3357,a[2]=t1,a[3]=t2,a[4]=t5,a[5]=t6,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_permanentp(t2))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4119,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:601: ##sys#block-address */
((C_proc3)C_fast_retrieve_symbol_proc(lf[247]))(3,*((C_word*)lf[247]+1),t8,t2);}
else{
t8=t7;
f_3357(2,t8,C_SCHEME_UNDEFINED);}}

/* k5612 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in ... */
static void C_ccall f_5614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5614,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5616,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=t2;
f_5616(2,t3,C_SCHEME_UNDEFINED);}
else{
/* csi.scm:1077: display */
t3=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[319]);}}
else{
t2=((C_word*)t0)[2];
f_5348(2,t2,C_SCHEME_UNDEFINED);}}

/* k5615 in k5612 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in ... */
static void C_ccall f_5616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5616,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5618,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1078: case-sensitive */
t3=C_fast_retrieve(lf[318]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_FALSE);}

/* k5617 in k5615 in k5612 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in ... */
static void C_ccall f_5618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5618,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5620,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1079: keyword-style */
t3=C_fast_retrieve(lf[316]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[317]);}

/* k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3233,2,t0,t1);}
t2=C_mutate(&lf[156] /* (set! describer-table ...) */,t1);
t3=*((C_word*)lf[157]+1);
t4=*((C_word*)lf[158]+1);
t5=*((C_word*)lf[159]+1);
t6=C_mutate((C_word*)lf[78]+1 /* (set! ##csi#describe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3235,a[2]=t5,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t7=C_mutate((C_word*)lf[248]+1 /* (set! set-describer! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4127,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[80]+1 /* (set! ##csi#dump ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4136,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[222]+1 /* (set! ##csi#hexdump ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4272,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate(&lf[107] /* (set! show-frameinfo ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4451,tmp=(C_word)a,a+=2,tmp));
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4929,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6052,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:915: ##sys#current-environment */
((C_proc2)C_fast_retrieve_symbol_proc(lf[381]))(2,*((C_word*)lf[381]+1),t12);}

/* k2479 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:343: string-split */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k5601 in k5347 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in ... */
static void C_ccall f_5602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5602,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5605,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_5605(t3,t1);}
else{
t3=((C_word*)t0)[3];
if(C_truep(t3)){
t4=t2;
f_5605(t4,t3);}
else{
t4=((C_word*)t0)[4];
t5=t2;
f_5605(t5,t4);}}}

/* k5603 in k5601 in k5347 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in ... */
static void C_fcall f_5605(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5605,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_5350(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5224,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1018: get-environment-variable */
t3=C_fast_retrieve(lf[42]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[312]);}}

/* f_2489 in k2487 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2489(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2489,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2495,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:348: g270 */
t4=((C_word*)t0)[3];
((C_proc5)C_fast_retrieve_proc(t4))(5,t4,t1,t2,lf[91],t3);}

/* k2487 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2488,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2489,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(t1,lf[92]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2506,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2511,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2511(t8,t4,t1);}

/* f_4236 in dump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4236(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4236,3,t0,t1,t2);}
/* csi.scm:742: body686 */
t3=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,*((C_word*)lf[51]+1));}

/* f_4240 in dump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4240,2,t0,t1);}
/* csi.scm:742: def-out689 */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,C_SCHEME_FALSE);}

/* k5810 in for-each-loop1254 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in ... */
static void C_ccall f_5811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5802(t3,((C_word*)t0)[4],t2);}

/* k5643 in k5640 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in ... */
static void C_ccall f_5644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1072: parentheses-synonyms */
t2=C_fast_retrieve(lf[315]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k5640 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in ... */
static void C_ccall f_5642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5642,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5644,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* csi.scm:1072: parentheses-synonyms */
t3=C_fast_retrieve(lf[315]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],C_SCHEME_FALSE);}
else{
/* csi.scm:1071: display */
t3=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[323]);}}
else{
t2=((C_word*)t0)[2];
f_5344(2,t2,C_SCHEME_UNDEFINED);}}

/* for-each-loop604 in k3933 in k3824 in k3714 in k3690 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in ... */
static void C_fcall f_3992(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3992,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4001,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:709: g605 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5489 in doloop1353 in k5351 in k5349 in k5347 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in ... */
static void C_ccall f_5490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5490,2,t0,t1);}
if(C_truep(C_i_equalp(lf[300],((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5501,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5510,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1129: call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],t2,t3);}
else{
t2=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t3=((C_word*)((C_word*)t0)[5])[1];
f_5357(t3,((C_word*)t0)[6],t2);}}

/* for-each-loop1254 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in ... */
static void C_fcall f_5802(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5802,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5811,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1052: g1255 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2415 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2416,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:336: read */
t3=*((C_word*)lf[75]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2417 in k2415 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2418,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2420,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:337: eval */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k5440 in doloop1353 in k5351 in k5349 in k5347 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in ... */
static void C_ccall f_5441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_u_i_cdr(t2));
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5357(t5,((C_word*)t0)[4],t4);}

/* k5475 in doloop1353 in k5351 in k5349 in k5347 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in ... */
static void C_ccall f_5476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_u_i_cdr(t2));
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5357(t5,((C_word*)t0)[4],t4);}

/* k2402 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2403,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2405,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:332: eval */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k2404 in k2402 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:333: dump */
t2=C_fast_retrieve(lf[80]);
f_4136(3,t2,((C_word*)t0)[2],t1);}

/* k5455 in doloop1353 in k5351 in k5349 in k5347 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in ... */
static void C_ccall f_5456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_u_i_cdr(t2));
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5357(t5,((C_word*)t0)[4],t4);}

/* k2450 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2451,2,t0,t1);}
t2=C_fast_retrieve(lf[87]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2454,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2459,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_2459(t7,t3,t1);}

/* k2452 in k2450 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* for-each-loop235 in k2450 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_2459(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2459,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2468,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:343: g236 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2421 in k2419 in k2417 in k2415 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:339: dump */
t2=C_fast_retrieve(lf[80]);
f_4136(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2419 in k2417 in k2415 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2420,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2422,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:338: eval */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k4321 in k4319 in k4317 in k4315 in k4313 in k4311 in doloop722 in hexdump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 in ... */
static void C_ccall f_4323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(16));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4303(t3,((C_word*)t0)[4],t2);}

/* k4319 in k4317 in k4315 in k4313 in k4311 in doloop722 in hexdump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4320,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[5]);}

/* k6210 in k6208 in a6201 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_6212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:262: sprintf */
t2=*((C_word*)lf[204]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[395],t1,C_fast_retrieve(lf[25]));}

/* k6217 in k6208 in a6201 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_6218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:265: sprintf */
t2=*((C_word*)lf[204]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[396],t1);}

/* f_2798 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2798,2,t0,t1);}
/* csi.scm:420: eval */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[3]);}

/* doloop748 in k4317 in k4315 in k4313 in k4311 in doloop722 in hexdump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_4331(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4331,NULL,4,t0,t1,t2,t3);}
t4=C_fixnum_greater_or_equal_p(t2,C_fix(16));
t5=(C_truep(t4)?t4:C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4342,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:790: ref */
t7=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[6],t3);}}

/* f_5463 in doloop1353 in k5351 in k5349 in k5347 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in ... */
static void C_ccall f_5463(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_5463r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5463r(t0,t1,t2);}}

static void C_ccall f_5463r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_apply(5,0,t1,*((C_word*)lf[92]+1),*((C_word*)lf[17]+1),t2);}

/* a6201 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_6202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6202,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6209,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:263: ##sys#current-module */
((C_proc2)C_fast_retrieve_symbol_proc(lf[399]))(2,*((C_word*)lf[399]+1),t2);}

/* k6198 in k6146 in a6142 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_6200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_6149(t3,t2);}

/* k6208 in a6201 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_6209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6209,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6212,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6218,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:265: ##sys#module-name */
((C_proc3)C_fast_retrieve_symbol_proc(lf[397]))(3,*((C_word*)lf[397]+1),t3,t1);}
else{
/* csi.scm:262: sprintf */
t3=*((C_word*)lf[204]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],lf[395],lf[398],C_fast_retrieve(lf[25]));}}

/* doloop722 in hexdump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_4303(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4303,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4312,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4449,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:773: justify */
f_4276(t4,t2,C_fix(4),C_fix(10),C_make_character(32));}}

/* k5416 in doloop1353 in k5351 in k5349 in k5347 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in ... */
static void C_ccall f_5417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_u_i_cdr(t2));
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5357(t5,((C_word*)t0)[4],t4);}

/* k2991 in k2981 */
static void C_fcall f_2992(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2992,NULL,2,t0,t1);}
if(C_truep(C_i_greater_or_equalp(((C_word*)((C_word*)t0)[2])[1],C_fix(3)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3000,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:496: display */
t3=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[129]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3007,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:499: make-string */
t3=*((C_word*)lf[130]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[4])[1],C_make_character(32));}}

/* k6228 in k6220 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_6230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1856(t2,(C_truep(t1)?lf[402]:lf[403]));}

/* k5632 in k5629 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in ... */
static void C_ccall f_5633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1075: symbol-escape */
t2=C_fast_retrieve(lf[314]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k5629 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in k5173 in k5171 in k5168 in k5166 in k5163 in ... */
static void C_ccall f_5631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5631,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5633,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* csi.scm:1075: symbol-escape */
t3=C_fast_retrieve(lf[314]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],C_SCHEME_FALSE);}
else{
/* csi.scm:1074: display */
t3=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[321]);}}
else{
t2=((C_word*)t0)[2];
f_5346(2,t2,C_SCHEME_UNDEFINED);}}

/* k4315 in k4313 in k4311 in doloop722 in hexdump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4316,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4318,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[5]);}

/* k4313 in k4311 in doloop722 in hexdump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4314,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4316,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4377,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=t4,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_4377(t6,t2,C_fix(0),((C_word*)t0)[2]);}

/* k4311 in doloop722 in hexdump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4312,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4314,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(58),((C_word*)t0)[5]);}

/* k4317 in k4315 in k4313 in k4311 in doloop722 in hexdump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4318,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4331,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_4331(t6,t2,C_fix(0),((C_word*)t0)[2]);}

/* k6220 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_6221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6221,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_1856(t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6230,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:77: get-environment-variable */
t3=C_fast_retrieve(lf[42]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[404]);}}

/* ##csi#print-banner in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_1881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1881,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1885,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:134: newline */
t3=*((C_word*)lf[22]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1886 in k1884 in print-banner in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_1887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1887,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1893,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:153: chicken-version */
t3=C_fast_retrieve(lf[20]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_TRUE);}

/* k1884 in print-banner in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_1885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1885,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1887,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:152: print */
t3=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[21]);}

/* k3721 in k3714 in k3690 in k3583 in k3486 in k3356 in describe in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_3722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[2],C_fix(2));
switch(t3){
case C_fix(0):
/* csi.scm:671: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[210],t1,t2,lf[211]);
case C_fix(1):
/* csi.scm:671: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[210],t1,t2,lf[212]);
case C_fix(2):
/* csi.scm:671: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[210],t1,t2,lf[213]);
case C_fix(3):
/* csi.scm:671: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[210],t1,t2,lf[214]);
case C_fix(4):
/* csi.scm:671: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[210],t1,t2,lf[215]);
case C_fix(5):
/* csi.scm:671: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[210],t1,t2,lf[216]);
case C_fix(6):
/* csi.scm:671: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[210],t1,t2,lf[217]);
case C_fix(7):
/* csi.scm:671: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[210],t1,t2,lf[218]);
case C_fix(8):
/* csi.scm:671: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[210],t1,t2,lf[219]);
case C_fix(9):
/* csi.scm:671: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[210],t1,t2,lf[220]);
default:
t4=C_SCHEME_UNDEFINED;
/* csi.scm:671: fprintf */
t5=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,((C_word*)t0)[3],((C_word*)t0)[4],lf[210],t1,t2,t4);}}

/* k2137 in history-add in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_2138(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_vector_set(C_fast_retrieve(lf[44]),C_fast_retrieve(lf[25]),((C_word*)t0)[2]);
t3=C_fixnum_plus(C_fast_retrieve(lf[25]),C_fix(1));
t4=C_mutate((C_word*)lf[25]+1 /* (set! ##csi#history-count ...) */,t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[2]);}

/* k4926 in k2683 in k2326 in csi-eval in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4732(t2,C_SCHEME_FALSE);}

/* k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_4929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4929,2,t0,t1);}
t2=C_establish_signal_handler(C_fix((C_word)SIGINT),C_fix((C_word)SIGINT));
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6046,tmp=(C_word)a,a+=2,tmp);
t4=C_i_setslot(C_fast_retrieve(lf[264]),C_fix((C_word)SIGINT),t3);
t5=C_mutate(&lf[265] /* (set! member* ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4934,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate(&lf[266] /* (set! canonicalize-args ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4986,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[275]+1 /* (set! ##csi#run ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5148,tmp=(C_word)a,a+=2,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6039,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1136: run */
t9=C_fast_retrieve(lf[275]);
f_5148(2,t9,t8);}

/* ##csi#history-add in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2130(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2130,3,t0,t1,t2);}
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[47]+1):C_slot(t2,C_fix(0)));
t5=C_block_size(C_fast_retrieve(lf[44]));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2138,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(C_fast_retrieve(lf[25]),t5))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2151,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=C_fixnum_times(C_fix(2),t5);
/* csi.scm:233: vector-resize */
t9=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,C_fast_retrieve(lf[44]),t8);}
else{
t7=t6;
f_2138(t7,C_SCHEME_UNDEFINED);}}

/* doloop732 in k4313 in k4311 in doloop722 in hexdump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_4377(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4377,NULL,4,t0,t1,t2,t3);}
t4=C_fixnum_greater_or_equal_p(t2,C_fix(16));
t5=(C_truep(t4)?t4:C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]));
if(C_truep(t5)){
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]))){
t6=C_fixnum_modulo(((C_word*)t0)[2],C_fix(16));
t7=C_eqp(t6,C_fix(0));
if(C_truep(t7)){
t8=C_SCHEME_UNDEFINED;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=C_fixnum_difference(C_fix(16),t6);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4408,a[2]=t10,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_4408(t12,t1,t8);}}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}}
else{
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4425,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* write-char/port */
t7=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_make_character(32),((C_word*)t0)[3]);}}

/* k5427 in doloop1353 in k5351 in k5349 in k5347 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in ... */
static void C_ccall f_5428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5428,2,t0,t1);}
t2=C_a_i_list(&a,1,t1);
t3=C_a_i_list(&a,3,lf[292],t2,C_SCHEME_TRUE);
/* csi.scm:1098: eval */
t4=C_fast_retrieve(lf[65]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],t3);}

/* k1827 */
static void C_ccall f_1828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1828,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1830,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* evalstring in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in ... */
static void C_fcall f_5252(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5252,NULL,3,t1,t2,t3);}
t4=C_i_nullp(t3);
t5=(C_truep(t4)?(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5294,tmp=(C_word)a,a+=2,tmp):C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5259,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1024: open-input-string */
t7=C_fast_retrieve(lf[278]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k5258 in evalstring in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in ... */
static void C_ccall f_5259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5259,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5265,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:1025: read */
t3=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k2876 in map-loop341 in k2843 in k2841 in k2825 in k6033 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 in ... */
static void C_ccall f_2877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2877,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2852(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2852(t6,((C_word*)t0)[5],t5);}}

/* k4343 in k4341 in doloop748 in k4317 in k4315 in k4313 in k4311 in doloop722 in hexdump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in ... */
static void C_ccall f_4345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_4331(t4,((C_word*)t0)[5],t2,t3);}

/* k4341 in doloop748 in k4317 in k4315 in k4313 in k4311 in doloop722 in hexdump in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 in ... */
static void C_ccall f_4342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4342,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4345,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_fixnum_greater_or_equal_p(t1,C_fix(32));
t4=(C_truep(t3)?C_fixnum_lessp(t1,C_fix(128)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_make_character(C_unfix(t1));
/* write-char/port */
t6=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t2,t5,((C_word*)t0)[6]);}
else{
/* write-char/port */
t5=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,C_make_character(46),((C_word*)t0)[6]);}}

/* k1831 in k1829 in k1827 */
static void C_ccall f_1832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1832,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1834,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* canonicalize-args in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_4986(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4986,NULL,2,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4992,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4992(t6,t1,t2);}

/* k1829 in k1827 */
static void C_ccall f_1830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1830,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1832,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_1836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1836,2,t0,t1);}
t2=C_mutate(&lf[0] /* (set! constant22 ...) */,lf[1]);
t3=C_set_block_item(lf[2] /* ##sys#repl-print-length-limit */,0,C_fix(2048));
t4=C_a_i_cons(&a,2,lf[3],C_fast_retrieve(lf[4]));
t5=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#features ...) */,t4);
t6=C_set_block_item(lf[5] /* ##sys#notices-enabled */,0,C_SCHEME_TRUE);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1849,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:71: make-parameter */
t8=C_fast_retrieve(lf[407]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,C_SCHEME_FALSE);}

/* k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_1834(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1834,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1836,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k5246 in k5223 in k5603 in k5601 in k5347 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in ... */
static void C_ccall f_5247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1020: string-append */
t2=*((C_word*)lf[37]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,lf[311],lf[0]);}

/* k2149 in history-add in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[44]+1 /* (set! ##csi#history-list ...) */,t1);
t3=((C_word*)t0)[2];
f_2138(t3,t2);}

/* k5239 in k5234 in k5223 in k5603 in k5601 in k5347 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in ... */
static void C_ccall f_5241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* csi.scm:1022: load */
t2=C_fast_retrieve(lf[87]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_5350(2,t3,t2);}}

/* f_2882 in k2825 in k6033 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2882(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2882,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2887,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2897,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:458: with-exception-handler */
t5=C_fast_retrieve(lf[369]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* f_5483 in doloop1353 in k5351 in k5349 in k5347 in k5345 in k5343 in k5341 in k5338 in k5334 in k5330 in k5327 in k5323 in k5320 in k5316 in k5314 in k5312 in k5310 in k5308 in k5306 in k5304 in k5302 in ... */
static void C_ccall f_5483(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_5483r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5483r(t0,t1,t2);}}

static void C_ccall f_5483r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_apply(5,0,t1,*((C_word*)lf[92]+1),C_fast_retrieve(lf[69]),t2);}

/* f_2887 */
static void C_ccall f_2887(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2887,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2892,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:458: k361 */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* ##csi#history-clear in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2165,2,t0,t1);}
t2=*((C_word*)lf[47]+1);
/* csi.scm:239: vector-fill! */
t3=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,C_fast_retrieve(lf[44]),*((C_word*)lf[47]+1));}

/* find in loop in member* in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_4952(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4952,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_i_cdr(((C_word*)t0)[2]);
/* csi.scm:931: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4940(t4,t1,t3);}
else{
t3=C_i_car(t2);
t4=C_i_car(((C_word*)t0)[2]);
if(C_truep(C_i_equalp(t3,t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[2]);}
else{
t5=t2;
t6=C_u_i_cdr(t5);
/* csi.scm:933: find */
t9=t1;
t10=t6;
t1=t9;
t2=t10;
goto loop;}}}

/* ##sys#user-read-hook in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_1895(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1895,4,t0,t1,t2,t3);}
t4=C_i_char_equalp(C_make_character(41),t2);
t5=(C_truep(t4)?t4:C_u_i_char_whitespacep(t2));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1910,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_fixnum_difference(C_fast_retrieve(lf[25]),C_fix(1));
/* csi.scm:164: history-ref */
t8=C_fast_retrieve(lf[26]);
f_2215(3,t8,t6,t7);}
else{
/* csi.scm:165: old-hook */
t6=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t1,t2,t3);}}

/* k1892 in k1886 in k1884 in print-banner in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_1893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:153: print */
t2=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[18],t1,lf[19]);}

/* k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_1853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1853,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1856,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_1856(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6221,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:76: get-environment-variable */
t4=C_fast_retrieve(lf[42]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[405]);}}

/* k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_1856(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1856,NULL,2,t0,t1);}
t2=C_mutate(&lf[8] /* (set! default-editor ...) */,t1);
t3=C_mutate((C_word*)lf[9]+1 /* (set! ##csi#print-usage ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1858,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[16]+1 /* (set! ##csi#print-banner ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1881,tmp=(C_word)a,a+=2,tmp));
t5=C_fast_retrieve(lf[23]);
t6=C_mutate((C_word*)lf[23]+1 /* (set! ##sys#user-read-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1895,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[27]+1 /* (set! ##sys#sharp-number-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1921,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate(&lf[28] /* (set! dirseparator? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1930,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[29]+1 /* (set! ##csi#chop-separator ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1942,tmp=(C_word)a,a+=2,tmp));
t10=C_set_block_item(lf[31] /* @ */,0,C_SCHEME_FALSE);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1970,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_symbol_proc(lf[401]))(4,*((C_word*)lf[401]+1),t11,C_fix(256),C_make_character(32));}

/* ##csi#print-usage in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_1858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1858,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1862,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:85: display */
t3=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[15]);}

/* ##csi#history-show in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2174,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2180,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_2180(t5,t1,C_fix(1));}

/* k2188 in doloop130 in history-show in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2189,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2191,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:242: display */
t3=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[5]);}

/* k2825 in k6033 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2826,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2827,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2842,a[2]=t5,a[3]=t3,a[4]=t6,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2882,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:458: call-with-current-continuation */
t9=*((C_word*)lf[370]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}

/* k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2820,2,t0,t1);}
t2=C_fast_retrieve(lf[124]);
t3=C_fast_retrieve(lf[125]);
t4=C_fast_retrieve(lf[126]);
t5=C_fast_retrieve(lf[127]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2942,a[2]=t5,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:474: get-environment-variable */
t7=C_fast_retrieve(lf[42]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[384]);}

/* f_2827 in k2825 in k6033 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2827(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2827,3,t0,t1,t2);}
if(C_truep(C_i_stringp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2835,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:455: open-output-string */
t4=C_fast_retrieve(lf[366]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1861 in print-usage in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_1862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1862,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1864,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1870,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[12],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,lf[0],t4);
t6=C_a_i_cons(&a,2,lf[13],t5);
/* csi.scm:84: ##sys#print-to-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t3,t6);}

/* k1863 in k1861 in print-usage in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_1864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:111: display */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[11]);}

/* f_5294 in evalstring in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in ... */
static void C_ccall f_5294(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5294,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* doloop130 in history-show in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_2180(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2180,NULL,3,t0,t1,t2);}
if(C_truep(C_i_greater_or_equalp(t2,C_fast_retrieve(lf[25])))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=*((C_word*)lf[51]+1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2189,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t5=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_make_character(35),*((C_word*)lf[51]+1));}}

/* k2195 in k2192 in k2190 in k2188 in doloop130 in history-show in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2196,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2199,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:251: newline */
t3=*((C_word*)lf[22]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2197 in k2195 in k2192 in k2190 in k2188 in doloop130 in history-show in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2180(t3,((C_word*)t0)[4],t2);}

/* k1869 in k1861 in print-usage in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_1870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:106: display */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f_5287 in doloop1223 in k5264 in k5258 in evalstring in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in ... */
static void C_ccall f_5287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5287,2,t0,t1);}
/* csi.scm:1027: eval */
t2=C_fast_retrieve(lf[65]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* k5284 in doloop1223 in k5264 in k5258 in evalstring in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in k2819 in ... */
static void C_ccall f_5285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1027: rec */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* k5281 in k5275 in doloop1223 in k5264 in k5258 in evalstring in k5173 in k5171 in k5168 in k5166 in k5163 in k5161 in k5159 in k5157 in k5155 in k5153 in k5151 in run in k4928 in k3231 in k2943 in k2941 in ... */
static void C_ccall f_5282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
f_5267(t2,((C_word*)t0)[3],t1);}

/* k2190 in k2188 in doloop130 in history-show in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2191,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2194,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:242: display */
t3=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[54],((C_word*)t0)[5]);}

/* k2192 in k2190 in k2188 in doloop130 in history-show in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_ccall f_2194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2194,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2196,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2207,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:247: ##sys#with-print-length-limit */
((C_proc4)C_fast_retrieve_symbol_proc(lf[53]))(4,*((C_word*)lf[53]+1),t2,C_fix(80),t3);}

/* map-loop341 in k2843 in k2841 in k2825 in k6033 in run in k4928 in k3231 in k2943 in k2941 in k2819 in k2238 in k1969 in k1854 in k1852 in k1847 in k1835 in k1833 in k1831 in k1829 in k1827 */
static void C_fcall f_2852(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2852,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2877,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:450: g347 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[510] = {
{"f_3716:csi_2escm",(void*)f_3716},
{"f_2803:csi_2escm",(void*)f_2803},
{"f_3971:csi_2escm",(void*)f_3971},
{"f_3707:csi_2escm",(void*)f_3707},
{"f_2806:csi_2escm",(void*)f_2806},
{"f_1849:csi_2escm",(void*)f_1849},
{"f_3966:csi_2escm",(void*)f_3966},
{"f_4170:csi_2escm",(void*)f_4170},
{"f_5235:csi_2escm",(void*)f_5235},
{"f_3955:csi_2escm",(void*)f_3955},
{"f_5224:csi_2escm",(void*)f_5224},
{"f_4185:csi_2escm",(void*)f_4185},
{"f_3428:csi_2escm",(void*)f_3428},
{"f_3423:csi_2escm",(void*)f_3423},
{"f_4934:csi_2escm",(void*)f_4934},
{"f_2835:csi_2escm",(void*)f_2835},
{"f_2837:csi_2escm",(void*)f_2837},
{"f_4940:csi_2escm",(void*)f_4940},
{"f_5209:csi_2escm",(void*)f_5209},
{"f_2111:csi_2escm",(void*)f_2111},
{"f_2845:csi_2escm",(void*)f_2845},
{"f_2842:csi_2escm",(void*)f_2842},
{"f_5276:csi_2escm",(void*)f_5276},
{"f_5265:csi_2escm",(void*)f_5265},
{"f_5267:csi_2escm",(void*)f_5267},
{"f_4417:csi_2escm",(void*)f_4417},
{"f_4119:csi_2escm",(void*)f_4119},
{"f_3905:csi_2escm",(void*)f_3905},
{"f_4425:csi_2escm",(void*)f_4425},
{"f_4428:csi_2escm",(void*)f_4428},
{"f_4127:csi_2escm",(void*)f_4127},
{"f_4475:csi_2escm",(void*)f_4475},
{"f_4408:csi_2escm",(void*)f_4408},
{"f_3173:csi_2escm",(void*)f_3173},
{"f_4451:csi_2escm",(void*)f_4451},
{"f_4455:csi_2escm",(void*)f_4455},
{"f_3946:csi_2escm",(void*)f_3946},
{"f_6190:csi_2escm",(void*)f_6190},
{"f_4461:csi_2escm",(void*)f_4461},
{"f_2558:csi_2escm",(void*)f_2558},
{"f_3938:csi_2escm",(void*)f_3938},
{"f_3935:csi_2escm",(void*)f_3935},
{"f_3934:csi_2escm",(void*)f_3934},
{"f_2553:csi_2escm",(void*)f_2553},
{"f_3488:csi_2escm",(void*)f_3488},
{"f_6178:csi_2escm",(void*)f_6178},
{"f_3624:csi_2escm",(void*)f_3624},
{"f_6171:csi_2escm",(void*)f_6171},
{"f_6175:csi_2escm",(void*)f_6175},
{"f_4449:csi_2escm",(void*)f_4449},
{"f_4440:csi_2escm",(void*)f_4440},
{"f_4443:csi_2escm",(void*)f_4443},
{"f_2572:csi_2escm",(void*)f_2572},
{"f_6157:csi_2escm",(void*)f_6157},
{"f_2548:csi_2escm",(void*)f_2548},
{"f_2540:csi_2escm",(void*)f_2540},
{"f_2545:csi_2escm",(void*)f_2545},
{"f_3494:csi_2escm",(void*)f_3494},
{"f_6147:csi_2escm",(void*)f_6147},
{"f_6149:csi_2escm",(void*)f_6149},
{"f_4634:csi_2escm",(void*)f_4634},
{"f_4632:csi_2escm",(void*)f_4632},
{"f_6143:csi_2escm",(void*)f_6143},
{"f_3117:csi_2escm",(void*)f_3117},
{"f_1921:csi_2escm",(void*)f_1921},
{"f_1928:csi_2escm",(void*)f_1928},
{"f_4606:csi_2escm",(void*)f_4606},
{"f_3108:csi_2escm",(void*)f_3108},
{"f_4483:csi_2escm",(void*)f_4483},
{"f_5537:csi_2escm",(void*)f_5537},
{"f_1930:csi_2escm",(void*)f_1930},
{"f_2586:csi_2escm",(void*)f_2586},
{"f_1910:csi_2escm",(void*)f_1910},
{"f_6106:csi_2escm",(void*)f_6106},
{"f_5584:csi_2escm",(void*)f_5584},
{"f_5707:csi_2escm",(void*)f_5707},
{"f_4646:csi_2escm",(void*)f_4646},
{"f_5704:csi_2escm",(void*)f_5704},
{"f_2520:csi_2escm",(void*)f_2520},
{"f_3692:csi_2escm",(void*)f_3692},
{"f_4761:csi_2escm",(void*)f_4761},
{"f_4764:csi_2escm",(void*)f_4764},
{"f_4768:csi_2escm",(void*)f_4768},
{"f_5567:csi_2escm",(void*)f_5567},
{"f_2364:csi_2escm",(void*)f_2364},
{"f_3686:csi_2escm",(void*)f_3686},
{"f_3683:csi_2escm",(void*)f_3683},
{"f_2356:csi_2escm",(void*)f_2356},
{"f_2358:csi_2escm",(void*)f_2358},
{"f_4734:csi_2escm",(void*)f_4734},
{"f_4732:csi_2escm",(void*)f_4732},
{"f_5556:csi_2escm",(void*)f_5556},
{"f_5551:csi_2escm",(void*)f_5551},
{"f_2375:csi_2escm",(void*)f_2375},
{"f_2367:csi_2escm",(void*)f_2367},
{"f_4744:csi_2escm",(void*)f_4744},
{"f_2511:csi_2escm",(void*)f_2511},
{"f_5549:csi_2escm",(void*)f_5549},
{"f_5545:csi_2escm",(void*)f_5545},
{"f_2567:csi_2escm",(void*)f_2567},
{"f_5547:csi_2escm",(void*)f_5547},
{"f_2569:csi_2escm",(void*)f_2569},
{"f_5541:csi_2escm",(void*)f_5541},
{"f_2379:csi_2escm",(void*)f_2379},
{"f_4683:csi_2escm",(void*)f_4683},
{"f_2377:csi_2escm",(void*)f_2377},
{"f_2561:csi_2escm",(void*)f_2561},
{"f_2392:csi_2escm",(void*)f_2392},
{"f_2390:csi_2escm",(void*)f_2390},
{"f_2532:csi_2escm",(void*)f_2532},
{"f_1988:csi_2escm",(void*)f_1988},
{"f_5720:csi_2escm",(void*)f_5720},
{"f_5722:csi_2escm",(void*)f_5722},
{"f_4770:csi_2escm",(void*)f_4770},
{"f_2506:csi_2escm",(void*)f_2506},
{"f_1997:csi_2escm",(void*)f_1997},
{"f_1995:csi_2escm",(void*)f_1995},
{"f_5510:csi_2escm",(void*)f_5510},
{"f_5712:csi_2escm",(void*)f_5712},
{"f_5715:csi_2escm",(void*)f_5715},
{"f_4164:csi_2escm",(void*)f_4164},
{"f6730:csi_2escm",(void*)f6730},
{"f_4781:csi_2escm",(void*)f_4781},
{"f6734:csi_2escm",(void*)f6734},
{"f_5501:csi_2escm",(void*)f_5501},
{"f_5508:csi_2escm",(void*)f_5508},
{"f_5782:csi_2escm",(void*)f_5782},
{"f_4139:csi_2escm",(void*)f_4139},
{"f_4136:csi_2escm",(void*)f_4136},
{"f_1971:csi_2escm",(void*)f_1971},
{"f_1970:csi_2escm",(void*)f_1970},
{"f_5570:csi_2escm",(void*)f_5570},
{"f_5777:csi_2escm",(void*)f_5777},
{"f_4142:csi_2escm",(void*)f_4142},
{"f_1942:csi_2escm",(void*)f_1942},
{"f_1954:csi_2escm",(void*)f_1954},
{"f_5752:csi_2escm",(void*)f_5752},
{"f_2936:csi_2escm",(void*)f_2936},
{"f_2931:csi_2escm",(void*)f_2931},
{"f_2312:csi_2escm",(void*)f_2312},
{"f_2946:csi_2escm",(void*)f_2946},
{"f_2945:csi_2escm",(void*)f_2945},
{"f_2942:csi_2escm",(void*)f_2942},
{"f_2958:csi_2escm",(void*)f_2958},
{"f_2953:csi_2escm",(void*)f_2953},
{"f_2955:csi_2escm",(void*)f_2955},
{"f_2336:csi_2escm",(void*)f_2336},
{"f_5791:csi_2escm",(void*)f_5791},
{"f_2328:csi_2escm",(void*)f_2328},
{"f_3157:csi_2escm",(void*)f_3157},
{"f_2962:csi_2escm",(void*)f_2962},
{"f_2960:csi_2escm",(void*)f_2960},
{"f_2964:csi_2escm",(void*)f_2964},
{"f_2978:csi_2escm",(void*)f_2978},
{"f_2979:csi_2escm",(void*)f_2979},
{"f_2342:csi_2escm",(void*)f_2342},
{"f_2971:csi_2escm",(void*)f_2971},
{"f_2976:csi_2escm",(void*)f_2976},
{"f_3132:csi_2escm",(void*)f_3132},
{"f_3130:csi_2escm",(void*)f_3130},
{"f_2982:csi_2escm",(void*)f_2982},
{"f_3864:csi_2escm",(void*)f_3864},
{"f_3855:csi_2escm",(void*)f_3855},
{"f_3853:csi_2escm",(void*)f_3853},
{"f_5747:csi_2escm",(void*)f_5747},
{"f_3842:csi_2escm",(void*)f_3842},
{"f_5191:csi_2escm",(void*)f_5191},
{"f_3830:csi_2escm",(void*)f_3830},
{"f_5183:csi_2escm",(void*)f_5183},
{"f_4836:csi_2escm",(void*)f_4836},
{"f_4838:csi_2escm",(void*)f_4838},
{"f_5175:csi_2escm",(void*)f_5175},
{"f_5172:csi_2escm",(void*)f_5172},
{"f_5344:csi_2escm",(void*)f_5344},
{"f_5342:csi_2escm",(void*)f_5342},
{"f_5177:csi_2escm",(void*)f_5177},
{"f_5348:csi_2escm",(void*)f_5348},
{"f_5346:csi_2escm",(void*)f_5346},
{"f_5170:csi_2escm",(void*)f_5170},
{"f_5340:csi_2escm",(void*)f_5340},
{"f_4844:csi_2escm",(void*)f_4844},
{"f_4840:csi_2escm",(void*)f_4840},
{"f_4842:csi_2escm",(void*)f_4842},
{"f_5165:csi_2escm",(void*)f_5165},
{"f_5162:csi_2escm",(void*)f_5162},
{"f_3896:csi_2escm",(void*)f_3896},
{"f_5167:csi_2escm",(void*)f_5167},
{"f_5374:csi_2escm",(void*)f_5374},
{"f_5377:csi_2escm",(void*)f_5377},
{"f_5160:csi_2escm",(void*)f_5160},
{"f_4992:csi_2escm",(void*)f_4992},
{"f_3888:csi_2escm",(void*)f_3888},
{"f_5152:csi_2escm",(void*)f_5152},
{"f_5154:csi_2escm",(void*)f_5154},
{"f_5156:csi_2escm",(void*)f_5156},
{"f_5158:csi_2escm",(void*)f_5158},
{"f_2908:csi_2escm",(void*)f_2908},
{"f_2902:csi_2escm",(void*)f_2902},
{"f_3872:csi_2escm",(void*)f_3872},
{"f_5148:csi_2escm",(void*)f_5148},
{"f_5352:csi_2escm",(void*)f_5352},
{"f_5357:csi_2escm",(void*)f_5357},
{"f_5350:csi_2escm",(void*)f_5350},
{"f_2732:csi_2escm",(void*)f_2732},
{"f_2727:csi_2escm",(void*)f_2727},
{"f_4872:csi_2escm",(void*)f_4872},
{"f_4878:csi_2escm",(void*)f_4878},
{"f_2910:csi_2escm",(void*)f_2910},
{"f_2897:csi_2escm",(void*)f_2897},
{"f_2892:csi_2escm",(void*)f_2892},
{"f_4880:csi_2escm",(void*)f_4880},
{"f_4889:csi_2escm",(void*)f_4889},
{"f_2926:csi_2escm",(void*)f_2926},
{"f_5123:csi_2escm",(void*)f_5123},
{"f_2752:csi_2escm",(void*)f_2752},
{"f_5391:csi_2escm",(void*)f_5391},
{"f_3826:csi_2escm",(void*)f_3826},
{"f_3820:csi_2escm",(void*)f_3820},
{"f_3088:csi_2escm",(void*)f_3088},
{"f_4092:csi_2escm",(void*)f_4092},
{"f_4816:csi_2escm",(void*)f_4816},
{"f_4811:csi_2escm",(void*)f_4811},
{"f_2708:csi_2escm",(void*)f_2708},
{"f_2707:csi_2escm",(void*)f_2707},
{"f_5322:csi_2escm",(void*)f_5322},
{"f_2239:csi_2escm",(void*)f_2239},
{"f_5329:csi_2escm",(void*)f_5329},
{"f_5324:csi_2escm",(void*)f_5324},
{"f_4825:csi_2escm",(void*)f_4825},
{"f_2241:csi_2escm",(void*)f_2241},
{"f_4084:csi_2escm",(void*)f_4084},
{"f_2254:csi_2escm",(void*)f_2254},
{"f_5309:csi_2escm",(void*)f_5309},
{"f_5307:csi_2escm",(void*)f_5307},
{"f_5305:csi_2escm",(void*)f_5305},
{"f_5303:csi_2escm",(void*)f_5303},
{"f_2741:csi_2escm",(void*)f_2741},
{"f_2261:csi_2escm",(void*)f_2261},
{"f_4802:csi_2escm",(void*)f_4802},
{"f_5952:csi_2escm",(void*)f_5952},
{"f_5950:csi_2escm",(void*)f_5950},
{"f_5959:csi_2escm",(void*)f_5959},
{"f_5331:csi_2escm",(void*)f_5331},
{"f_2267:csi_2escm",(void*)f_2267},
{"f_5336:csi_2escm",(void*)f_5336},
{"f_3025:csi_2escm",(void*)f_3025},
{"f_3027:csi_2escm",(void*)f_3027},
{"f_5946:csi_2escm",(void*)f_5946},
{"f_3029:csi_2escm",(void*)f_3029},
{"f_5944:csi_2escm",(void*)f_5944},
{"f_5948:csi_2escm",(void*)f_5948},
{"f_5369:csi_2escm",(void*)f_5369},
{"f_3023:csi_2escm",(void*)f_3023},
{"f_2281:csi_2escm",(void*)f_2281},
{"f_2285:csi_2escm",(void*)f_2285},
{"f_5931:csi_2escm",(void*)f_5931},
{"f_5939:csi_2escm",(void*)f_5939},
{"f_5311:csi_2escm",(void*)f_5311},
{"f_5317:csi_2escm",(void*)f_5317},
{"f_5315:csi_2escm",(void*)f_5315},
{"f_5313:csi_2escm",(void*)f_5313},
{"f_3007:csi_2escm",(void*)f_3007},
{"f_5925:csi_2escm",(void*)f_5925},
{"f_3000:csi_2escm",(void*)f_3000},
{"f_4023:csi_2escm",(void*)f_4023},
{"f_4027:csi_2escm",(void*)f_4027},
{"f_5094:csi_2escm",(void*)f_5094},
{"f_3293:csi_2escm",(void*)f_3293},
{"f_3291:csi_2escm",(void*)f_3291},
{"f_5087:csi_2escm",(void*)f_5087},
{"f_6091:csi_2escm",(void*)f_6091},
{"f_3282:csi_2escm",(void*)f_3282},
{"f_6097:csi_2escm",(void*)f_6097},
{"f_4001:csi_2escm",(void*)f_4001},
{"f_5078:csi_2escm",(void*)f_5078},
{"f_3274:csi_2escm",(void*)f_3274},
{"f_4294:csi_2escm",(void*)f_4294},
{"f_5053:csi_2escm",(void*)f_5053},
{"f_4276:csi_2escm",(void*)f_4276},
{"f_2037:csi_2escm",(void*)f_2037},
{"f_4272:csi_2escm",(void*)f_4272},
{"f_5046:csi_2escm",(void*)f_5046},
{"f_5049:csi_2escm",(void*)f_5049},
{"f_2041:csi_2escm",(void*)f_2041},
{"f_6052:csi_2escm",(void*)f_6052},
{"f_6055:csi_2escm",(void*)f_6055},
{"f_6057:csi_2escm",(void*)f_6057},
{"f_4280:csi_2escm",(void*)f_4280},
{"f_2207:csi_2escm",(void*)f_2207},
{"f_5037:csi_2escm",(void*)f_5037},
{"f_6041:csi_2escm",(void*)f_6041},
{"f_6044:csi_2escm",(void*)f_6044},
{"f_6046:csi_2escm",(void*)f_6046},
{"f_2215:csi_2escm",(void*)f_2215},
{"f_5026:csi_2escm",(void*)f_5026},
{"f_2064:csi_2escm",(void*)f_2064},
{"f_6076:csi_2escm",(void*)f_6076},
{"f_4514:csi_2escm",(void*)f_4514},
{"f_4510:csi_2escm",(void*)f_4510},
{"f_4512:csi_2escm",(void*)f_4512},
{"f_4517:csi_2escm",(void*)f_4517},
{"f_5013:csi_2escm",(void*)f_5013},
{"f_4519:csi_2escm",(void*)f_4519},
{"f_2070:csi_2escm",(void*)f_2070},
{"f_2073:csi_2escm",(void*)f_2073},
{"f_2075:csi_2escm",(void*)f_2075},
{"f_6066:csi_2escm",(void*)f_6066},
{"f_3319:csi_2escm",(void*)f_3319},
{"f_4526:csi_2escm",(void*)f_4526},
{"f_4523:csi_2escm",(void*)f_4523},
{"f_4521:csi_2escm",(void*)f_4521},
{"f_2080:csi_2escm",(void*)f_2080},
{"f_3206:csi_2escm",(void*)f_3206},
{"f_6017:csi_2escm",(void*)f_6017},
{"f_2086:csi_2escm",(void*)f_2086},
{"f_2088:csi_2escm",(void*)f_2088},
{"f_4211:csi_2escm",(void*)f_4211},
{"f_2099:csi_2escm",(void*)f_2099},
{"f_2097:csi_2escm",(void*)f_2097},
{"f_4504:csi_2escm",(void*)f_4504},
{"f_4506:csi_2escm",(void*)f_4506},
{"f_4508:csi_2escm",(void*)f_4508},
{"f_6034:csi_2escm",(void*)f_6034},
{"f_6031:csi_2escm",(void*)f_6031},
{"f_6039:csi_2escm",(void*)f_6039},
{"f_4551:csi_2escm",(void*)f_4551},
{"f_6028:csi_2escm",(void*)f_6028},
{"f_5872:csi_2escm",(void*)f_5872},
{"f_5878:csi_2escm",(void*)f_5878},
{"f_3355:csi_2escm",(void*)f_3355},
{"f_4567:csi_2escm",(void*)f_4567},
{"f_3359:csi_2escm",(void*)f_3359},
{"f_3357:csi_2escm",(void*)f_3357},
{"f_4560:csi_2escm",(void*)f_4560},
{"f_4565:csi_2escm",(void*)f_4565},
{"f_4562:csi_2escm",(void*)f_4562},
{"f_4203:csi_2escm",(void*)f_4203},
{"f_5861:csi_2escm",(void*)f_5861},
{"f_3343:csi_2escm",(void*)f_3343},
{"f_5863:csi_2escm",(void*)f_5863},
{"f_4538:csi_2escm",(void*)f_4538},
{"f_4546:csi_2escm",(void*)f_4546},
{"f_5855:csi_2escm",(void*)f_5855},
{"f6861:csi_2escm",(void*)f6861},
{"f_2644:csi_2escm",(void*)f_2644},
{"f_5843:csi_2escm",(void*)f_5843},
{"f_5847:csi_2escm",(void*)f_5847},
{"f_5845:csi_2escm",(void*)f_5845},
{"f_4597:csi_2escm",(void*)f_4597},
{"f_3507:csi_2escm",(void*)f_3507},
{"f_3504:csi_2escm",(void*)f_3504},
{"f_3502:csi_2escm",(void*)f_3502},
{"f_2655:csi_2escm",(void*)f_2655},
{"f_5900:csi_2escm",(void*)f_5900},
{"f_5831:csi_2escm",(void*)f_5831},
{"f_3067:csi_2escm",(void*)f_3067},
{"f_3061:csi_2escm",(void*)f_3061},
{"f_3064:csi_2escm",(void*)f_3064},
{"f_2003:csi_2escm",(void*)f_2003},
{"f_3536:csi_2escm",(void*)f_3536},
{"f_3533:csi_2escm",(void*)f_3533},
{"f_3531:csi_2escm",(void*)f_3531},
{"f_5822:csi_2escm",(void*)f_5822},
{"f_3055:csi_2escm",(void*)f_3055},
{"f_3058:csi_2escm",(void*)f_3058},
{"f_3052:csi_2escm",(void*)f_3052},
{"f_4570:csi_2escm",(void*)f_4570},
{"f_2666:csi_2escm",(void*)f_2666},
{"f_2016:csi_2escm",(void*)f_2016},
{"f_4059:csi_2escm",(void*)f_4059},
{"f_3046:csi_2escm",(void*)f_3046},
{"f_4054:csi_2escm",(void*)f_4054},
{"f_3517:csi_2escm",(void*)f_3517},
{"f_2684:csi_2escm",(void*)f_2684},
{"f_3031:csi_2escm",(void*)f_3031},
{"f_3544:csi_2escm",(void*)f_3544},
{"f_2694:csi_2escm",(void*)f_2694},
{"f_2692:csi_2escm",(void*)f_2692},
{"f_2696:csi_2escm",(void*)f_2696},
{"f_3574:csi_2escm",(void*)f_3574},
{"f_3571:csi_2escm",(void*)f_3571},
{"f_4046:csi_2escm",(void*)f_4046},
{"f_4040:csi_2escm",(void*)f_4040},
{"f_3522:csi_2escm",(void*)f_3522},
{"f_2633:csi_2escm",(void*)f_2633},
{"toplevel:csi_2escm",(void*)C_toplevel},
{"f_3585:csi_2escm",(void*)f_3585},
{"f_3587:csi_2escm",(void*)f_3587},
{"f_3562:csi_2escm",(void*)f_3562},
{"f_2672:csi_2escm",(void*)f_2672},
{"f_5895:csi_2escm",(void*)f_5895},
{"f_5893:csi_2escm",(void*)f_5893},
{"f_3595:csi_2escm",(void*)f_3595},
{"f_2600:csi_2escm",(void*)f_2600},
{"f_5887:csi_2escm",(void*)f_5887},
{"f_5885:csi_2escm",(void*)f_5885},
{"f_3253:csi_2escm",(void*)f_3253},
{"f_2495:csi_2escm",(void*)f_2495},
{"f_2498:csi_2escm",(void*)f_2498},
{"f_2616:csi_2escm",(void*)f_2616},
{"f_2619:csi_2escm",(void*)f_2619},
{"f_5620:csi_2escm",(void*)f_5620},
{"f_5622:csi_2escm",(void*)f_5622},
{"f_3248:csi_2escm",(void*)f_3248},
{"f_3242:csi_2escm",(void*)f_3242},
{"f_2468:csi_2escm",(void*)f_2468},
{"f_3235:csi_2escm",(void*)f_3235},
{"f_5614:csi_2escm",(void*)f_5614},
{"f_5616:csi_2escm",(void*)f_5616},
{"f_5618:csi_2escm",(void*)f_5618},
{"f_3233:csi_2escm",(void*)f_3233},
{"f_2480:csi_2escm",(void*)f_2480},
{"f_5602:csi_2escm",(void*)f_5602},
{"f_5605:csi_2escm",(void*)f_5605},
{"f_2489:csi_2escm",(void*)f_2489},
{"f_2488:csi_2escm",(void*)f_2488},
{"f_4236:csi_2escm",(void*)f_4236},
{"f_4240:csi_2escm",(void*)f_4240},
{"f_5811:csi_2escm",(void*)f_5811},
{"f_5644:csi_2escm",(void*)f_5644},
{"f_5642:csi_2escm",(void*)f_5642},
{"f_3992:csi_2escm",(void*)f_3992},
{"f_5490:csi_2escm",(void*)f_5490},
{"f_5802:csi_2escm",(void*)f_5802},
{"f_2416:csi_2escm",(void*)f_2416},
{"f_2418:csi_2escm",(void*)f_2418},
{"f_5441:csi_2escm",(void*)f_5441},
{"f_5476:csi_2escm",(void*)f_5476},
{"f_2403:csi_2escm",(void*)f_2403},
{"f_2405:csi_2escm",(void*)f_2405},
{"f_5456:csi_2escm",(void*)f_5456},
{"f_2451:csi_2escm",(void*)f_2451},
{"f_2454:csi_2escm",(void*)f_2454},
{"f_2459:csi_2escm",(void*)f_2459},
{"f_2422:csi_2escm",(void*)f_2422},
{"f_2420:csi_2escm",(void*)f_2420},
{"f_4323:csi_2escm",(void*)f_4323},
{"f_4320:csi_2escm",(void*)f_4320},
{"f_6212:csi_2escm",(void*)f_6212},
{"f_6218:csi_2escm",(void*)f_6218},
{"f_2798:csi_2escm",(void*)f_2798},
{"f_4331:csi_2escm",(void*)f_4331},
{"f_5463:csi_2escm",(void*)f_5463},
{"f_6202:csi_2escm",(void*)f_6202},
{"f_6200:csi_2escm",(void*)f_6200},
{"f_6209:csi_2escm",(void*)f_6209},
{"f_4303:csi_2escm",(void*)f_4303},
{"f_5417:csi_2escm",(void*)f_5417},
{"f_2992:csi_2escm",(void*)f_2992},
{"f_6230:csi_2escm",(void*)f_6230},
{"f_5633:csi_2escm",(void*)f_5633},
{"f_5631:csi_2escm",(void*)f_5631},
{"f_4316:csi_2escm",(void*)f_4316},
{"f_4314:csi_2escm",(void*)f_4314},
{"f_4312:csi_2escm",(void*)f_4312},
{"f_4318:csi_2escm",(void*)f_4318},
{"f_6221:csi_2escm",(void*)f_6221},
{"f_1881:csi_2escm",(void*)f_1881},
{"f_1887:csi_2escm",(void*)f_1887},
{"f_1885:csi_2escm",(void*)f_1885},
{"f_3722:csi_2escm",(void*)f_3722},
{"f_2138:csi_2escm",(void*)f_2138},
{"f_4927:csi_2escm",(void*)f_4927},
{"f_4929:csi_2escm",(void*)f_4929},
{"f_2130:csi_2escm",(void*)f_2130},
{"f_4377:csi_2escm",(void*)f_4377},
{"f_5428:csi_2escm",(void*)f_5428},
{"f_1828:csi_2escm",(void*)f_1828},
{"f_5252:csi_2escm",(void*)f_5252},
{"f_5259:csi_2escm",(void*)f_5259},
{"f_2877:csi_2escm",(void*)f_2877},
{"f_4345:csi_2escm",(void*)f_4345},
{"f_4342:csi_2escm",(void*)f_4342},
{"f_1832:csi_2escm",(void*)f_1832},
{"f_4986:csi_2escm",(void*)f_4986},
{"f_1830:csi_2escm",(void*)f_1830},
{"f_1836:csi_2escm",(void*)f_1836},
{"f_1834:csi_2escm",(void*)f_1834},
{"f_5247:csi_2escm",(void*)f_5247},
{"f_2151:csi_2escm",(void*)f_2151},
{"f_5241:csi_2escm",(void*)f_5241},
{"f_2882:csi_2escm",(void*)f_2882},
{"f_5483:csi_2escm",(void*)f_5483},
{"f_2887:csi_2escm",(void*)f_2887},
{"f_2165:csi_2escm",(void*)f_2165},
{"f_4952:csi_2escm",(void*)f_4952},
{"f_1895:csi_2escm",(void*)f_1895},
{"f_1893:csi_2escm",(void*)f_1893},
{"f_1853:csi_2escm",(void*)f_1853},
{"f_1856:csi_2escm",(void*)f_1856},
{"f_1858:csi_2escm",(void*)f_1858},
{"f_2174:csi_2escm",(void*)f_2174},
{"f_2189:csi_2escm",(void*)f_2189},
{"f_2826:csi_2escm",(void*)f_2826},
{"f_2820:csi_2escm",(void*)f_2820},
{"f_2827:csi_2escm",(void*)f_2827},
{"f_1862:csi_2escm",(void*)f_1862},
{"f_1864:csi_2escm",(void*)f_1864},
{"f_5294:csi_2escm",(void*)f_5294},
{"f_2180:csi_2escm",(void*)f_2180},
{"f_2196:csi_2escm",(void*)f_2196},
{"f_2199:csi_2escm",(void*)f_2199},
{"f_1870:csi_2escm",(void*)f_1870},
{"f_5287:csi_2escm",(void*)f_5287},
{"f_5285:csi_2escm",(void*)f_5285},
{"f_5282:csi_2escm",(void*)f_5282},
{"f_2191:csi_2escm",(void*)f_2191},
{"f_2194:csi_2escm",(void*)f_2194},
{"f_2852:csi_2escm",(void*)f_2852},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}

/*
S|applied compiler syntax:
S|  map		7
S|  for-each		11
S|  printf		4
o|eliminated procedure checks: 128 
o|eliminated procedure checks: 1 
o|specializations:
o|  7 (string=? string string)
o|  1 (set-cdr! pair *)
o|  2 (cddr (pair * pair))
o|  3 (cadr (pair * pair))
o|  1 (min fixnum fixnum)
o|  1 (memq * list)
o|  22 (cdr pair)
o|  1 (current-output-port)
o|  8 (car pair)
o|  2 (zero? fixnum)
o|  3 (##sys#check-list (or pair list) *)
o|  29 (eqv? * (not float))
o|  4 (string-append string string)
o|  1 (make-string fixnum)
o|safe globals: (##sys#repl-print-length-limit constant22 constant17 constant14) 
o|Removed `not' forms: 8 
o|substituted constant variable: constant17 
o|substituted constant variable: constant14 
o|inlining procedure: k1898 
o|inlining procedure: k1898 
o|inlining procedure: k1935 
o|inlining procedure: k1935 
o|inlining procedure: k1949 
o|inlining procedure: k1949 
o|inlining procedure: k1991 
o|inlining procedure: k1991 
o|substituted constant variable: a2005 
o|inlining procedure: k2042 
o|inlining procedure: k2057 
o|inlining procedure: k2057 
o|inlining procedure: k2091 
o|inlining procedure: k2091 
o|substituted constant variable: a2116 
o|contracted procedure: "(csi.scm:209) string-index83" 
o|inlining procedure: k2019 
o|inlining procedure: k2019 
o|inlining procedure: k2042 
o|inlining procedure: k2183 
o|inlining procedure: k2183 
o|propagated global variable: out136140 ##sys#standard-output 
o|inlining procedure: k2220 
o|inlining procedure: k2220 
o|inlining procedure: k2246 
o|inlining procedure: k2246 
o|inlining procedure: k2257 
o|inlining procedure: k2257 
o|inlining procedure: k2279 
o|inlining procedure: k2279 
o|inlining procedure: k2315 
o|inlining procedure: k2315 
o|inlining procedure: k2333 
o|inlining procedure: k2333 
o|inlining procedure: k2368 
o|inlining procedure: k2368 
o|inlining procedure: k2396 
o|inlining procedure: k2396 
o|inlining procedure: k2426 
o|inlining procedure: k2426 
o|inlining procedure: k2444 
o|inlining procedure: k2462 
o|inlining procedure: k2462 
o|inlining procedure: k2444 
o|inlining procedure: k2514 
o|inlining procedure: k2514 
o|inlining procedure: k2533 
o|inlining procedure: k2533 
o|inlining procedure: k2582 
o|inlining procedure: k2582 
o|inlining procedure: k2593 
o|inlining procedure: k2593 
o|inlining procedure: k2637 
o|inlining procedure: k2637 
o|inlining procedure: k2659 
o|inlining procedure: k2659 
o|inlining procedure: k2685 
o|inlining procedure: k2685 
o|inlining procedure: k2712 
o|inlining procedure: k2712 
o|inlining procedure: k2735 
o|inlining procedure: k2735 
o|propagated global variable: g308310 command-table 
o|substituted constant variable: a2757 
o|substituted constant variable: a2759 
o|substituted constant variable: a2761 
o|substituted constant variable: a2763 
o|substituted constant variable: a2765 
o|substituted constant variable: a2767 
o|substituted constant variable: a2769 
o|substituted constant variable: a2771 
o|substituted constant variable: a2773 
o|substituted constant variable: a2775 
o|substituted constant variable: a2777 
o|substituted constant variable: a2779 
o|substituted constant variable: a2781 
o|substituted constant variable: a2783 
o|substituted constant variable: a2785 
o|substituted constant variable: a2787 
o|substituted constant variable: a2789 
o|substituted constant variable: a2791 
o|substituted constant variable: a2793 
o|inlining procedure: k2993 
o|inlining procedure: k2993 
o|inlining procedure: k3030 
o|inlining procedure: k3030 
o|inlining procedure: k3111 
o|inlining procedure: k3111 
o|inlining procedure: k3135 
o|inlining procedure: k3135 
o|propagated global variable: g415419 ##sys#features 
o|inlining procedure: k3258 
o|inlining procedure: k3258 
o|inlining procedure: k3285 
o|inlining procedure: k3310 
o|inlining procedure: k3310 
o|inlining procedure: k3285 
o|inlining procedure: k3358 
o|inlining procedure: k3358 
o|inlining procedure: k3380 
o|inlining procedure: k3380 
o|inlining procedure: k3398 
o|inlining procedure: k3398 
o|inlining procedure: k3416 
o|inlining procedure: k3416 
o|inlining procedure: k3447 
o|inlining procedure: k3447 
o|inlining procedure: k3465 
o|inlining procedure: k3465 
o|inlining procedure: k3483 
o|inlining procedure: k3483 
o|inlining procedure: k3510 
o|inlining procedure: k3510 
o|inlining procedure: k3525 
o|inlining procedure: k3525 
o|inlining procedure: k3561 
o|inlining procedure: k3561 
o|inlining procedure: k3578 
o|inlining procedure: k3598 
o|inlining procedure: k3598 
o|inlining procedure: k3617 
o|inlining procedure: k3617 
o|inlining procedure: k3578 
o|inlining procedure: k3657 
o|inlining procedure: k3657 
o|removed call to pure procedure with unused result: "(csi.scm:659) size" 
o|inlining procedure: k3687 
o|inlining procedure: k3687 
o|inlining procedure: k3729 
o|inlining procedure: k3729 
o|inlining procedure: k3741 
o|inlining procedure: k3741 
o|inlining procedure: k3753 
o|inlining procedure: k3753 
o|inlining procedure: k3765 
o|inlining procedure: k3765 
o|inlining procedure: k3777 
o|inlining procedure: k3777 
o|substituted constant variable: a3790 
o|substituted constant variable: a3792 
o|substituted constant variable: a3794 
o|substituted constant variable: a3796 
o|substituted constant variable: a3798 
o|substituted constant variable: a3800 
o|substituted constant variable: a3802 
o|substituted constant variable: a3804 
o|substituted constant variable: a3806 
o|substituted constant variable: a3808 
o|inlining procedure: k3809 
o|inlining procedure: k3809 
o|inlining procedure: k3834 
o|inlining procedure: k3834 
o|inlining procedure: k3867 
o|inlining procedure: k3867 
o|inlining procedure: k3899 
o|inlining procedure: k3899 
o|inlining procedure: k3949 
o|inlining procedure: k3949 
o|inlining procedure: k3927 
o|inlining procedure: k3995 
o|inlining procedure: k3995 
o|inlining procedure: k3927 
o|inlining procedure: k4024 
o|inlining procedure: k4024 
o|inlining procedure: k4062 
o|inlining procedure: k4062 
o|contracted procedure: "(csi.scm:645) improper-pairs?" 
o|inlining procedure: k3209 
o|inlining procedure: k3209 
o|contracted procedure: "(csi.scm:645) circular-list?" 
o|inlining procedure: k3176 
o|inlining procedure: k3193 
o|inlining procedure: k3193 
o|inlining procedure: k3176 
o|inlining procedure: k4145 
o|inlining procedure: k4145 
o|inlining procedure: k4150 
o|inlining procedure: k4150 
o|inlining procedure: k4174 
o|inlining procedure: k4174 
o|inlining procedure: k4198 
o|inlining procedure: k4198 
o|inlining procedure: k4244 
o|inlining procedure: k4244 
o|inlining procedure: k4283 
o|inlining procedure: k4283 
o|inlining procedure: k4306 
o|inlining procedure: k4306 
o|inlining procedure: k4334 
o|inlining procedure: k4334 
o|inlining procedure: k4380 
o|inlining procedure: k4395 
o|inlining procedure: k4395 
o|inlining procedure: k4411 
o|inlining procedure: k4411 
o|inlining procedure: k4380 
o|inlining procedure: k4486 
o|inlining procedure: k4486 
o|inlining procedure: k4540 
o|inlining procedure: k4540 
o|inlining procedure: k4554 
o|inlining procedure: k4554 
o|propagated global variable: out843847 ##sys#standard-output 
o|inlining procedure: k4600 
o|inlining procedure: k4600 
o|propagated global variable: out812816 ##sys#standard-output 
o|inlining procedure: k4642 
o|inlining procedure: k4642 
o|inlining procedure: k4654 
o|propagated global variable: out797801 ##sys#standard-output 
o|inlining procedure: k4654 
o|inlining procedure: k4659 
o|inlining procedure: k4659 
o|propagated global variable: tmp775777 ##sys#repl-recent-call-chain 
o|propagated global variable: tmp775777 ##sys#repl-recent-call-chain 
o|inlining procedure: k4677 
o|inlining procedure: k4677 
o|inlining procedure: k4705 
o|inlining procedure: k4705 
o|inlining procedure: k4754 
o|inlining procedure: k4784 
o|inlining procedure: k4784 
o|inlining procedure: k4819 
o|inlining procedure: k4819 
o|inlining procedure: k4883 
o|inlining procedure: k4883 
o|inlining procedure: k4754 
o|inlining procedure: k4920 
o|inlining procedure: k4920 
o|propagated global variable: tmp893895 ##sys#repl-recent-call-chain 
o|propagated global variable: tmp893895 ##sys#repl-recent-call-chain 
o|inlining procedure: k4943 
o|inlining procedure: k4955 
o|inlining procedure: k4955 
o|inlining procedure: k4943 
o|inlining procedure: k4995 
o|inlining procedure: k4995 
o|inlining procedure: k5008 
o|inlining procedure: k5027 
o|inlining procedure: k5056 
o|inlining procedure: k5056 
o|inlining procedure: k5027 
o|contracted procedure: "(csi.scm:957) findall" 
o|substituted constant variable: constant1038 
o|inlining procedure: k5128 
o|inlining procedure: k5128 
o|inlining procedure: k5008 
o|inlining procedure: k5100 
o|substituted constant variable: constant1045 
o|inlining procedure: k5100 
o|inlining procedure: k5193 
o|inlining procedure: k5193 
o|inlining procedure: k5188 
o|inlining procedure: k5188 
o|merged explicitly consed rest parameter: tmp12131215 
o|inlining procedure: k5270 
o|inlining procedure: k5270 
o|inlining procedure: k5360 
o|inlining procedure: k5360 
o|inlining procedure: k5398 
o|inlining procedure: k5398 
o|substituted constant variable: a5435 
o|inlining procedure: k5432 
o|consed rest parameter at call site: "(csi.scm:1101) evalstring1194" 2 
o|inlining procedure: k5432 
o|substituted constant variable: a5450 
o|consed rest parameter at call site: "(csi.scm:1104) evalstring1194" 2 
o|substituted constant variable: a5470 
o|inlining procedure: k5467 
o|consed rest parameter at call site: "(csi.scm:1107) evalstring1194" 2 
o|inlining procedure: k5467 
o|inlining procedure: k5515 
o|inlining procedure: k5515 
o|inlining procedure: k5532 
o|inlining procedure: k5559 
o|inlining procedure: k5559 
o|propagated global variable: g14061407 pretty-print 
o|inlining procedure: k5532 
o|substituted constant variable: a5592 
o|substituted constant variable: a5594 
o|substituted constant variable: a5596 
o|substituted constant variable: a5598 
o|substituted constant variable: constant1118 
o|substituted constant variable: constant1109 
o|contracted procedure: "(csi.scm:1082) loadinit1193" 
o|inlining procedure: k5225 
o|inlining procedure: k5236 
o|inlining procedure: k5236 
o|inlining procedure: k5225 
o|inlining procedure: k5609 
o|inlining procedure: k5609 
o|inlining procedure: k5632 
o|inlining procedure: k5632 
o|inlining procedure: k5643 
o|inlining procedure: k5643 
o|inlining procedure: k5651 
o|inlining procedure: k5669 
o|inlining procedure: k5669 
o|inlining procedure: k5651 
o|inlining procedure: k5725 
o|inlining procedure: k5725 
o|inlining procedure: k5755 
o|inlining procedure: k5755 
o|inlining procedure: k5785 
o|inlining procedure: k5785 
o|inlining procedure: k5805 
o|inlining procedure: k5805 
o|inlining procedure: k5825 
o|inlining procedure: k5825 
o|inlining procedure: k5862 
o|inlining procedure: k5862 
o|inlining procedure: k5903 
o|inlining procedure: k5903 
o|inlining procedure: k5932 
o|inlining procedure: k5932 
o|inlining procedure: k5935 
o|inlining procedure: k5935 
o|inlining procedure: k5940 
o|inlining procedure: k5940 
o|inlining procedure: k5955 
o|inlining procedure: k5955 
o|substituted constant variable: a5973 
o|inlining procedure: k5990 
o|inlining procedure: k5990 
o|inlining procedure: k6020 
o|inlining procedure: k6020 
o|contracted procedure: "(csi.scm:979) parse-option-string" 
o|inlining procedure: k2829 
o|inlining procedure: k2829 
o|inlining procedure: k2855 
o|inlining procedure: k2855 
o|inlining procedure: k2913 
o|inlining procedure: k2913 
o|inlining procedure: k6061 
o|inlining procedure: k6061 
o|inlining procedure: k6127 
o|inlining procedure: k6127 
o|contracted procedure: k6153 
o|inlining procedure: k6150 
o|inlining procedure: k6172 
o|inlining procedure: k6172 
o|inlining procedure: k6150 
o|inlining procedure: k6210 
o|inlining procedure: k6210 
o|substituted constant variable: a6219 
o|inlining procedure: k6222 
o|inlining procedure: k6222 
o|replaced variables: 649 
o|removed binding forms: 168 
o|removed side-effect free assignment to unused variable: constant14 
o|removed side-effect free assignment to unused variable: constant17 
o|substituted constant variable: f_20906243 
o|substituted constant variable: f_20186244 
o|substituted constant variable: r20436246 
o|contracted procedure: "(csi.scm:376) select-frame" 
o|contracted procedure: "(csi.scm:379) copy-from-frame" 
o|converted assignments to bindings: (fail907) 
o|converted assignments to bindings: (compare902) 
o|substituted constant variable: r49216432 
o|converted assignments to bindings: (shorten397) 
o|substituted constant variable: a33096308 
o|substituted constant variable: a33096309 
o|inlining procedure: k3426 
o|inlining procedure: k3358 
o|inlining procedure: k3358 
o|contracted procedure: k3676 
o|substituted constant variable: r37306347 
o|substituted constant variable: r37306347 
o|inlining procedure: k3729 
o|inlining procedure: k3729 
o|substituted constant variable: r37426351 
o|inlining procedure: k3729 
o|inlining procedure: k3729 
o|substituted constant variable: r37546353 
o|inlining procedure: k3729 
o|inlining procedure: k3729 
o|substituted constant variable: r37666355 
o|inlining procedure: k3729 
o|inlining procedure: k3729 
o|substituted constant variable: r37786357 
o|inlining procedure: k3729 
o|inlining procedure: k3729 
o|substituted constant variable: f_32086378 
o|substituted constant variable: f_31756382 
o|converted assignments to bindings: (descseq506) 
o|converted assignments to bindings: (bestlen700) 
o|converted assignments to bindings: (justify723) 
o|substituted constant variable: a46416413 
o|substituted constant variable: a46416414 
o|substituted constant variable: a46536415 
o|substituted constant variable: a46536416 
o|substituted constant variable: r46606418 
o|converted assignments to bindings: (prin1772) 
o|substituted constant variable: f_49426436 
o|removed side-effect free assignment to unused variable: constant1038 
o|removed side-effect free assignment to unused variable: constant1045 
o|substituted constant variable: f_49946437 
o|substituted constant variable: clist1095 
o|substituted constant variable: r51016448 
o|removed side-effect free assignment to unused variable: constant1109 
o|removed side-effect free assignment to unused variable: constant1118 
o|substituted constant variable: r51896452 
o|substituted constant variable: a55146464 
o|substituted constant variable: a55316468 
o|substituted constant variable: r52266472 
o|substituted constant variable: r59336513 
o|substituted constant variable: r59336513 
o|substituted constant variable: r60216524 
o|substituted constant variable: r61286534 
o|substituted constant variable: r62116541 
o|substituted constant variable: r62116541 
o|converted assignments to bindings: (addext82) 
o|simplifications: ((let . 8)) 
o|replaced variables: 19 
o|removed binding forms: 627 
o|inlining procedure: k2620 
o|inlining procedure: k2620 
o|inlining procedure: "(csi.scm:367) history-clear" 
o|inlining procedure: k4800 
o|inlining procedure: k3954 
o|inlining procedure: k5389 
o|inlining procedure: k5389 
o|inlining procedure: k5389 
o|inlining procedure: k5389 
o|inlining procedure: k5389 
o|inlining procedure: k5389 
o|inlining procedure: k5517 
o|inlining procedure: k5389 
o|inlining procedure: k5568 
o|inlining procedure: k5844 
o|inlining procedure: k5982 
o|inlining procedure: k5982 
o|replaced variables: 13 
o|removed binding forms: 73 
o|substituted constant variable: r37306603 
o|substituted constant variable: r37306605 
o|substituted constant variable: r37306607 
o|substituted constant variable: r37306609 
o|substituted constant variable: r37306611 
o|substituted constant variable: r37306613 
o|substituted constant variable: r37306615 
o|substituted constant variable: r37306617 
o|substituted constant variable: r37306619 
o|substituted constant variable: r55186835 
o|replaced variables: 3 
o|removed binding forms: 19 
o|removed conditional forms: 1 
o|removed binding forms: 12 
o|simplifications: ((if . 33) (##core#call . 548)) 
o|  call simplifications:
o|    make-vector
o|    ##sys#pair?	2
o|    ##sys#eq?
o|    ##sys#cdr	4
o|    ##sys#car	2
o|    ##sys#cons	11
o|    set-car!
o|    call-with-values
o|    void
o|    member	8
o|    string->list
o|    string
o|    equal?	3
o|    fxmod
o|    number->string
o|    ##sys#immediate?	2
o|    ##sys#permanent?
o|    char?
o|    fixnum?	2
o|    flonum?
o|    vector?
o|    list?
o|    procedure?
o|    ##sys#pointer?	2
o|    ##sys#generic-structure?	2
o|    cdr	15
o|    caar
o|    cdar
o|    fx=	3
o|    atom?
o|    memq	3
o|    cddr	3
o|    integer->char	2
o|    char->integer
o|    ##sys#setslot	9
o|    =
o|    -
o|    <=
o|    add1	2
o|    +
o|    *
o|    /
o|    eof-object?	4
o|    caddr
o|    symbol?	3
o|    string?	5
o|    ##sys#structure?	4
o|    string-length	5
o|    fxmin
o|    string=?	6
o|    number?	2
o|    not	4
o|    fx<	4
o|    length	4
o|    list-ref	2
o|    eq?	43
o|    apply	5
o|    ##sys#call-with-values	5
o|    ##sys#apply	2
o|    ##sys#check-list	17
o|    cadr	13
o|    car	19
o|    ##sys#check-symbol	2
o|    ##sys#check-string
o|    assq	4
o|    list	7
o|    set-cdr!	2
o|    ##sys#fudge	6
o|    inexact->exact
o|    fx<=
o|    >=	2
o|    write-char	11
o|    vector-ref	8
o|    null?	21
o|    ##sys#void	21
o|    fx*
o|    vector-set!
o|    >
o|    fx>=	15
o|    fx+	20
o|    pair?	32
o|    ##sys#slot	80
o|    ##sys#foreign-block-argument
o|    ##sys#foreign-fixnum-argument
o|    ##sys#size	11
o|    sub1
o|    string-ref	4
o|    fx>	5
o|    char=?	7
o|    char-whitespace?
o|    fx-	11
o|    ##sys#list	4
o|    cons	16
o|contracted procedure: k1842 
o|contracted procedure: k1878 
o|contracted procedure: k1875 
o|contracted procedure: k1872 
o|contracted procedure: k1900 
o|contracted procedure: k1902 
o|contracted procedure: k1912 
o|contracted procedure: k1933 
o|contracted procedure: k1965 
o|contracted procedure: k1945 
o|contracted procedure: k1947 
o|contracted procedure: k1958 
o|contracted procedure: k1978 
o|contracted procedure: k1982 
o|contracted procedure: k2122 
o|contracted procedure: k2045 
o|contracted procedure: k2093 
o|contracted procedure: k2107 
o|contracted procedure: k2114 
o|contracted procedure: k2010 
o|contracted procedure: k2021 
o|contracted procedure: k2034 
o|contracted procedure: k2119 
o|contracted procedure: k2125 
o|contracted procedure: k2155 
o|contracted procedure: k2133 
o|contracted procedure: k2135 
o|contracted procedure: k2139 
o|contracted procedure: k2142 
o|contracted procedure: k2145 
o|contracted procedure: k2153 
o|contracted procedure: k2171 
o|propagated global variable: a2170 ##sys#undefined-value 
o|contracted procedure: k2185 
o|contracted procedure: k2204 
o|contracted procedure: k2212 
o|contracted procedure: k2218 
o|contracted procedure: k2232 
o|contracted procedure: k2223 
o|contracted procedure: k2244 
o|contracted procedure: k2305 
o|contracted procedure: k2270 
o|contracted procedure: k2273 
o|contracted procedure: k2275 
o|contracted procedure: k2277 
o|contracted procedure: k2290 
o|contracted procedure: k2300 
o|contracted procedure: k2296 
o|contracted procedure: k2317 
o|contracted procedure: k2329 
o|contracted procedure: k2331 
o|contracted procedure: k2338 
o|contracted procedure: k2352 
o|contracted procedure: k2371 
o|contracted procedure: k2386 
o|contracted procedure: k2399 
o|contracted procedure: k2412 
o|contracted procedure: k2429 
o|contracted procedure: k2438 
o|contracted procedure: k2447 
o|contracted procedure: k2464 
o|contracted procedure: k2473 
o|contracted procedure: k2476 
o|contracted procedure: k2484 
o|contracted procedure: k2502 
o|contracted procedure: k2516 
o|contracted procedure: k2525 
o|contracted procedure: k2528 
o|contracted procedure: k2536 
o|contracted procedure: k2579 
o|contracted procedure: k2591 
o|contracted procedure: k2596 
o|contracted procedure: k2604 
o|contracted procedure: k2629 
o|contracted procedure: k21716739 
o|propagated global variable: a21706737 ##sys#undefined-value 
o|contracted procedure: k2640 
o|contracted procedure: k2651 
o|contracted procedure: k2662 
o|contracted procedure: k4720 
o|contracted procedure: k4679 
o|contracted procedure: k4698 
o|contracted procedure: k4701 
o|contracted procedure: k4695 
o|contracted procedure: k4688 
o|contracted procedure: k4703 
o|contracted procedure: k4708 
o|contracted procedure: k4717 
o|contracted procedure: k2676 
o|contracted procedure: k4726 
o|contracted procedure: k4729 
o|contracted procedure: k4737 
o|contracted procedure: k4749 
o|contracted procedure: k4752 
o|contracted procedure: k4746 
o|contracted procedure: k4775 
o|propagated global variable: a4774 ##sys#undefined-value 
o|contracted procedure: k4786 
o|contracted procedure: k4792 
o|contracted procedure: k4794 
o|contracted procedure: k4796 
o|contracted procedure: k4798 
o|contracted procedure: k4808 
o|contracted procedure: k4821 
o|contracted procedure: k4830 
o|contracted procedure: k4849 
o|contracted procedure: k4855 
o|contracted procedure: k4852 
o|contracted procedure: k4860 
o|contracted procedure: k4862 
o|contracted procedure: k4864 
o|contracted procedure: k4866 
o|contracted procedure: k4868 
o|contracted procedure: k4905 
o|contracted procedure: k4885 
o|contracted procedure: k4894 
o|contracted procedure: k4897 
o|contracted procedure: k4900 
o|contracted procedure: k4903 
o|contracted procedure: k4914 
o|contracted procedure: k4923 
o|contracted procedure: k2688 
o|contracted procedure: k2698 
o|contracted procedure: k2703 
o|contracted procedure: k2710 
o|contracted procedure: k2723 
o|contracted procedure: k2737 
o|contracted procedure: k2746 
o|contracted procedure: k2749 
o|propagated global variable: g308310 command-table 
o|contracted procedure: k2810 
o|contracted procedure: k2817 
o|contracted procedure: k2973 
o|contracted procedure: k2983 
o|contracted procedure: k2985 
o|contracted procedure: k2988 
o|contracted procedure: k2996 
o|contracted procedure: k3008 
o|contracted procedure: k3012 
o|contracted procedure: k3016 
o|contracted procedure: k3019 
o|contracted procedure: k3032 
o|contracted procedure: k3038 
o|contracted procedure: k3104 
o|contracted procedure: k3048 
o|contracted procedure: k3069 
o|contracted procedure: k3072 
o|contracted procedure: k3095 
o|contracted procedure: k3075 
o|contracted procedure: k3078 
o|contracted procedure: k3081 
o|contracted procedure: k3093 
o|contracted procedure: k3089 
o|contracted procedure: k3084 
o|contracted procedure: k3099 
o|contracted procedure: k3102 
o|contracted procedure: k3113 
o|contracted procedure: k3122 
o|contracted procedure: k3125 
o|contracted procedure: k3137 
o|contracted procedure: k3140 
o|contracted procedure: k3149 
o|contracted procedure: k3159 
o|contracted procedure: k3161 
o|contracted procedure: k4120 
o|contracted procedure: k3238 
o|contracted procedure: k3245 
o|contracted procedure: k3256 
o|contracted procedure: k3264 
o|contracted procedure: k3271 
o|contracted procedure: k3345 
o|contracted procedure: k3279 
o|contracted procedure: k3287 
o|contracted procedure: k3298 
o|contracted procedure: k3300 
o|contracted procedure: k3307 
o|contracted procedure: k3312 
o|contracted procedure: k3326 
o|contracted procedure: k3333 
o|contracted procedure: k3336 
o|contracted procedure: k3348 
o|contracted procedure: k3363 
o|contracted procedure: k3366 
o|contracted procedure: k3374 
o|contracted procedure: k3383 
o|contracted procedure: k3392 
o|contracted procedure: k3401 
o|contracted procedure: k4109 
o|contracted procedure: k3410 
o|propagated global variable: a4108 ##sys#undefined-value 
o|contracted procedure: k3419 
o|contracted procedure: k3424 
o|contracted procedure: k3432 
o|contracted procedure: k4106 
o|contracted procedure: k3441 
o|contracted procedure: k3450 
o|contracted procedure: k3459 
o|contracted procedure: k3468 
o|contracted procedure: k3477 
o|contracted procedure: k3498 
o|contracted procedure: k3508 
o|contracted procedure: k3513 
o|contracted procedure: k3527 
o|contracted procedure: k3541 
o|contracted procedure: k3549 
o|contracted procedure: k3552 
o|contracted procedure: k3555 
o|contracted procedure: k3558 
o|contracted procedure: k3592 
o|contracted procedure: k3600 
o|contracted procedure: k3602 
o|contracted procedure: k3643 
o|contracted procedure: k3611 
o|contracted procedure: k3620 
o|contracted procedure: k3631 
o|contracted procedure: k3651 
o|contracted procedure: k3660 
o|contracted procedure: k3673 
o|contracted procedure: k3708 
o|contracted procedure: k3697 
o|contracted procedure: k3700 
o|contracted procedure: k3703 
o|contracted procedure: k3724 
o|contracted procedure: k3727 
o|contracted procedure: k3732 
o|contracted procedure: k3738 
o|contracted procedure: k3744 
o|contracted procedure: k3750 
o|contracted procedure: k3756 
o|contracted procedure: k3762 
o|contracted procedure: k3768 
o|contracted procedure: k3774 
o|contracted procedure: k3780 
o|contracted procedure: k3786 
o|contracted procedure: k3812 
o|contracted procedure: k3827 
o|contracted procedure: k3846 
o|contracted procedure: k3849 
o|contracted procedure: k3856 
o|contracted procedure: k3858 
o|contracted procedure: k3869 
o|contracted procedure: k3877 
o|contracted procedure: k3880 
o|contracted procedure: k3882 
o|contracted procedure: k3884 
o|contracted procedure: k3893 
o|contracted procedure: k3901 
o|contracted procedure: k3910 
o|contracted procedure: k3913 
o|contracted procedure: k3916 
o|contracted procedure: k3924 
o|contracted procedure: k3919 
o|contracted procedure: k3922 
o|contracted procedure: k3930 
o|contracted procedure: k3943 
o|contracted procedure: k3951 
o|contracted procedure: k3960 
o|contracted procedure: k3982 
o|contracted procedure: k3962 
o|contracted procedure: k3976 
o|contracted procedure: k3979 
o|contracted procedure: k39606770 
o|contracted procedure: k3984 
o|contracted procedure: k3986 
o|contracted procedure: k3997 
o|contracted procedure: k4006 
o|contracted procedure: k4009 
o|contracted procedure: k4012 
o|contracted procedure: k4017 
o|contracted procedure: k4020 
o|contracted procedure: k4035 
o|contracted procedure: k4048 
o|contracted procedure: k4050 
o|contracted procedure: k4056 
o|contracted procedure: k4064 
o|contracted procedure: k4067 
o|contracted procedure: k4076 
o|contracted procedure: k4086 
o|contracted procedure: k4097 
o|contracted procedure: k3211 
o|contracted procedure: k3225 
o|contracted procedure: k3214 
o|contracted procedure: k3178 
o|contracted procedure: k3185 
o|contracted procedure: k3189 
o|contracted procedure: k3191 
o|contracted procedure: k4111 
o|contracted procedure: k4130 
o|contracted procedure: k4153 
o|contracted procedure: k4172 
o|contracted procedure: k4177 
o|contracted procedure: k4187 
o|contracted procedure: k4227 
o|contracted procedure: k4192 
o|contracted procedure: k4204 
o|contracted procedure: k4213 
o|contracted procedure: k4218 
o|contracted procedure: k4225 
o|contracted procedure: k4247 
o|contracted procedure: k4253 
o|contracted procedure: k4259 
o|contracted procedure: k4265 
o|contracted procedure: k4281 
o|contracted procedure: k4286 
o|contracted procedure: k4297 
o|contracted procedure: k4308 
o|contracted procedure: k4328 
o|contracted procedure: k4336 
o|contracted procedure: k4338 
o|contracted procedure: k4350 
o|contracted procedure: k4353 
o|contracted procedure: k4367 
o|contracted procedure: k4355 
o|contracted procedure: k4362 
o|contracted procedure: k4382 
o|contracted procedure: k4384 
o|contracted procedure: k4390 
o|contracted procedure: k4393 
o|contracted procedure: k4398 
o|contracted procedure: k4405 
o|contracted procedure: k4413 
o|contracted procedure: k4422 
o|contracted procedure: k4433 
o|contracted procedure: k4436 
o|contracted procedure: k4465 
o|contracted procedure: k4468 
o|contracted procedure: k4471 
o|contracted procedure: k4480 
o|contracted procedure: k4488 
o|contracted procedure: k4491 
o|contracted procedure: k4493 
o|contracted procedure: k4495 
o|contracted procedure: k4497 
o|contracted procedure: k4499 
o|contracted procedure: k4501 
o|contracted procedure: k4533 
o|contracted procedure: k4535 
o|contracted procedure: k4542 
o|contracted procedure: k4556 
o|contracted procedure: k4575 
o|contracted procedure: k4580 
o|contracted procedure: k4583 
o|contracted procedure: k4585 
o|contracted procedure: k4587 
o|contracted procedure: k4589 
o|contracted procedure: k4591 
o|contracted procedure: k4622 
o|contracted procedure: k4602 
o|contracted procedure: k4611 
o|contracted procedure: k4614 
o|contracted procedure: k4617 
o|contracted procedure: k4620 
o|contracted procedure: k4639 
o|contracted procedure: k4651 
o|contracted procedure: k4662 
o|contracted procedure: k4669 
o|contracted procedure: k4930 
o|contracted procedure: k4945 
o|contracted procedure: k4957 
o|contracted procedure: k4964 
o|contracted procedure: k4978 
o|contracted procedure: k4981 
o|contracted procedure: k4969 
o|contracted procedure: k4997 
o|contracted procedure: k5000 
o|contracted procedure: k5005 
o|contracted procedure: k5017 
o|contracted procedure: k5042 
o|contracted procedure: k5058 
o|contracted procedure: k5061 
o|contracted procedure: k5070 
o|contracted procedure: k5080 
o|contracted procedure: k5126 
o|contracted procedure: k5143 
o|contracted procedure: k5134 
o|contracted procedure: k5114 
o|contracted procedure: k5097 
o|contracted procedure: k5103 
o|contracted procedure: k5110 
o|contracted procedure: k5186 
o|contracted procedure: k5214 
o|contracted procedure: k5195 
o|contracted procedure: k5205 
o|contracted procedure: k5291 
o|contracted procedure: k5255 
o|contracted procedure: k5272 
o|contracted procedure: k5318 
o|contracted procedure: k5325 
o|contracted procedure: k5332 
o|contracted procedure: k5362 
o|contracted procedure: k5385 
o|contracted procedure: k5387 
o|contracted procedure: k5396 
o|contracted procedure: k53966814 
o|contracted procedure: k5401 
o|contracted procedure: k5405 
o|contracted procedure: k53966818 
o|contracted procedure: k5411 
o|contracted procedure: k53966822 
o|contracted procedure: k5424 
o|contracted procedure: k5421 
o|contracted procedure: k5430 
o|contracted procedure: k53966826 
o|contracted procedure: k5445 
o|contracted procedure: k53966830 
o|contracted procedure: k5460 
o|contracted procedure: k53966834 
o|contracted procedure: k5480 
o|contracted procedure: k5487 
o|contracted procedure: k5494 
o|contracted procedure: k5523 
o|contracted procedure: k5517 
o|contracted procedure: k5515 
o|contracted procedure: k53966840 
o|contracted procedure: k5534 
o|contracted procedure: k5542 
o|contracted procedure: k5561 
o|contracted procedure: k5564 
o|contracted procedure: k5575 
o|contracted procedure: k5577 
o|contracted procedure: k55756844 
o|contracted procedure: k5231 
o|contracted procedure: k5700 
o|contracted procedure: k5654 
o|contracted procedure: k5694 
o|contracted procedure: k5663 
o|contracted procedure: k5672 
o|contracted procedure: k5681 
o|contracted procedure: k5708 
o|contracted procedure: k5716 
o|contracted procedure: k5727 
o|contracted procedure: k5730 
o|contracted procedure: k5739 
o|contracted procedure: k5749 
o|contracted procedure: k5757 
o|contracted procedure: k5760 
o|contracted procedure: k5769 
o|contracted procedure: k5779 
o|contracted procedure: k5787 
o|contracted procedure: k5796 
o|contracted procedure: k5799 
o|contracted procedure: k5807 
o|contracted procedure: k5816 
o|contracted procedure: k5819 
o|contracted procedure: k5827 
o|contracted procedure: k5836 
o|contracted procedure: k5839 
o|contracted procedure: k5868 
o|contracted procedure: k5879 
o|contracted procedure: k5905 
o|contracted procedure: k5908 
o|contracted procedure: k5917 
o|contracted procedure: k5927 
o|contracted procedure: k5953 
o|contracted procedure: k5969 
o|contracted procedure: k5978 
o|contracted procedure: k6012 
o|contracted procedure: k6009 
o|contracted procedure: k5980 
o|contracted procedure: k6006 
o|contracted procedure: k6003 
o|contracted procedure: k5988 
o|contracted procedure: k5997 
o|contracted procedure: k5982 
o|contracted procedure: k6018 
o|contracted procedure: k6035 
o|contracted procedure: k2831 
o|contracted procedure: k2846 
o|contracted procedure: k2857 
o|contracted procedure: k2860 
o|contracted procedure: k2869 
o|contracted procedure: k2879 
o|contracted procedure: k2915 
o|contracted procedure: k2928 
o|contracted procedure: k6059 
o|contracted procedure: k6067 
o|contracted procedure: k6117 
o|contracted procedure: k6069 
o|contracted procedure: k6114 
o|contracted procedure: k6111 
o|contracted procedure: k6108 
o|contracted procedure: k6081 
o|contracted procedure: k6102 
o|contracted procedure: k6099 
o|contracted procedure: k6093 
o|contracted procedure: k6087 
o|contracted procedure: k6084 
o|contracted procedure: k6078 
o|contracted procedure: k6122 
o|contracted procedure: k6125 
o|contracted procedure: k6130 
o|contracted procedure: k6137 
o|contracted procedure: k6164 
o|contracted procedure: k6194 
o|simplifications: ((if . 3) (let . 109)) 
o|removed binding forms: 489 
o|inlining procedure: "(csi.scm:182) dirseparator?" 
o|inlining procedure: "(csi.scm:203) dirseparator?" 
o|inlining procedure: "(csi.scm:208) dirseparator?" 
o|inlining procedure: "(csi.scm:277) tty-input?" 
o|inlining procedure: k4824 
o|inlining procedure: k3142 
o|inlining procedure: k3142 
o|inlining procedure: k4069 
o|inlining procedure: k4069 
o|inlining procedure: k4524 
o|inlining procedure: k5063 
o|inlining procedure: k5063 
o|inlining procedure: k5732 
o|inlining procedure: k5732 
o|inlining procedure: k5762 
o|inlining procedure: k5762 
o|inlining procedure: k5910 
o|inlining procedure: k5910 
o|inlining procedure: k2862 
o|inlining procedure: k2862 
o|replaced variables: 74 
o|simplifications: ((let . 9) (if . 5)) 
o|replaced variables: 18 
o|removed binding forms: 46 
o|inlining procedure: k2259 
o|contracted procedure: k5413 
o|contracted procedure: k5437 
o|contracted procedure: k5452 
o|contracted procedure: k5472 
o|simplifications: ((if . 3)) 
o|removed binding forms: 15 
o|contracted procedure: k2051 
o|contracted procedure: k2027 
o|replaced variables: 1 
o|removed binding forms: 2 
o|removed binding forms: 1 
o|direct leaf routine/allocation: loop90 0 
o|direct leaf routine/allocation: lp480 0 
o|direct leaf routine/allocation: lp466 0 
o|direct leaf routine/allocation: loop1096 0 
o|contracted procedure: k2060 
o|converted assignments to bindings: (loop90) 
o|contracted procedure: k3581 
o|converted assignments to bindings: (lp480) 
o|converted assignments to bindings: (lp466) 
o|contracted procedure: k5030 
o|converted assignments to bindings: (loop1096) 
o|simplifications: ((let . 4)) 
o|removed binding forms: 3 
o|customizable procedures: (k1854 k6148 k6064 doloop369370 map-loop341375 canonicalize-args k5159 k5163 k5168 map-loop11651185 k5306 k5310 for-each-loop12371247 for-each-loop12541264 for-each-loop12711281 map-loop12881305 collect-options1192 map-loop13141331 member* k5603 k5351 doloop14091410 evalstring1194 doloop13531354 doloop12231224 loop1196 k5011 map-loop10601085 loop1049 find1027 loop1024 k4473 k4644 for-each-loop822855 prin1772 doloop836837 doloop784785 justify723 doloop732733 doloop740741 doloop748749 doloop722730 k4201 bestlen700 k3583 map-loop649666 for-each-loop604621 loop615 for-each-loop582593 doloop577578 loop-print554 doloop541542 loop2521 loop1512 k2952 map-loop403420 for-each-loop429450 shorten397 k2991 k2326 for-each-loop301313 k4731 for-each-loop920944 compare902 doloop934935 doloop906911 fail907 k4681 show-frameinfo for-each-loop254274 for-each-loop235245 doloop130131 k2137 loop107 addext82 k1952) 
o|calls to known targets: 262 
o|identified direct recursive calls: f_2016 1 
o|identified direct recursive calls: f_4781 1 
o|identified direct recursive calls: f_3173 1 
o|identified direct recursive calls: f_3946 1 
o|identified direct recursive calls: f_3206 1 
o|identified direct recursive calls: f_4952 1 
o|identified direct recursive calls: f_5123 1 
o|unused rest argument: _1221 f_5294 
o|unused rest argument: _1357 f_5377 
o|identified direct recursive calls: f_5357 2 
o|fast box initializations: 46 
o|fast global references: 37 
o|fast global assignments: 14 
o|dropping unused closure argument: f_4934 
o|dropping unused closure argument: f_3173 
o|dropping unused closure argument: f_4451 
o|dropping unused closure argument: f_4455 
o|dropping unused closure argument: f_1988 
o|dropping unused closure argument: f_2964 
o|dropping unused closure argument: f_5123 
o|dropping unused closure argument: f_4276 
o|dropping unused closure argument: f_3206 
o|dropping unused closure argument: f_5252 
o|dropping unused closure argument: f_4986 
*/
/* end of file */
