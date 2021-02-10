// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"

// face_feature.h
cpp11::writable::list get_face_features_c(cpp11::strings path, cpp11::integers index);
extern "C" SEXP _textshaping_get_face_features_c(SEXP path, SEXP index) {
  BEGIN_CPP11
    return cpp11::as_sexp(get_face_features_c(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(path), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(index)));
  END_CPP11
}
// string_metrics.h
list get_string_shape_c(strings string, integers id, strings path, integers index, doubles size, doubles res, doubles lineheight, integers align, doubles hjust, doubles vjust, doubles width, doubles tracking, doubles indent, doubles hanging, doubles space_before, doubles space_after);
extern "C" SEXP _textshaping_get_string_shape_c(SEXP string, SEXP id, SEXP path, SEXP index, SEXP size, SEXP res, SEXP lineheight, SEXP align, SEXP hjust, SEXP vjust, SEXP width, SEXP tracking, SEXP indent, SEXP hanging, SEXP space_before, SEXP space_after) {
  BEGIN_CPP11
    return cpp11::as_sexp(get_string_shape_c(cpp11::as_cpp<cpp11::decay_t<strings>>(string), cpp11::as_cpp<cpp11::decay_t<integers>>(id), cpp11::as_cpp<cpp11::decay_t<strings>>(path), cpp11::as_cpp<cpp11::decay_t<integers>>(index), cpp11::as_cpp<cpp11::decay_t<doubles>>(size), cpp11::as_cpp<cpp11::decay_t<doubles>>(res), cpp11::as_cpp<cpp11::decay_t<doubles>>(lineheight), cpp11::as_cpp<cpp11::decay_t<integers>>(align), cpp11::as_cpp<cpp11::decay_t<doubles>>(hjust), cpp11::as_cpp<cpp11::decay_t<doubles>>(vjust), cpp11::as_cpp<cpp11::decay_t<doubles>>(width), cpp11::as_cpp<cpp11::decay_t<doubles>>(tracking), cpp11::as_cpp<cpp11::decay_t<doubles>>(indent), cpp11::as_cpp<cpp11::decay_t<doubles>>(hanging), cpp11::as_cpp<cpp11::decay_t<doubles>>(space_before), cpp11::as_cpp<cpp11::decay_t<doubles>>(space_after)));
  END_CPP11
}
// string_metrics.h
doubles get_line_width_c(strings string, strings path, integers index, doubles size, doubles res, logicals include_bearing);
extern "C" SEXP _textshaping_get_line_width_c(SEXP string, SEXP path, SEXP index, SEXP size, SEXP res, SEXP include_bearing) {
  BEGIN_CPP11
    return cpp11::as_sexp(get_line_width_c(cpp11::as_cpp<cpp11::decay_t<strings>>(string), cpp11::as_cpp<cpp11::decay_t<strings>>(path), cpp11::as_cpp<cpp11::decay_t<integers>>(index), cpp11::as_cpp<cpp11::decay_t<doubles>>(size), cpp11::as_cpp<cpp11::decay_t<doubles>>(res), cpp11::as_cpp<cpp11::decay_t<logicals>>(include_bearing)));
  END_CPP11
}

extern "C" {
/* .Call calls */
extern SEXP _textshaping_get_face_features_c(SEXP, SEXP);
extern SEXP _textshaping_get_line_width_c(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _textshaping_get_string_shape_c(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_textshaping_get_face_features_c", (DL_FUNC) &_textshaping_get_face_features_c,  2},
    {"_textshaping_get_line_width_c",    (DL_FUNC) &_textshaping_get_line_width_c,     6},
    {"_textshaping_get_string_shape_c",  (DL_FUNC) &_textshaping_get_string_shape_c,  16},
    {NULL, NULL, 0}
};
}

void init_hb_shaper(DllInfo* dll);
void export_string_metrics(DllInfo* dll);

extern "C" void R_init_textshaping(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  init_hb_shaper(dll);
  export_string_metrics(dll);
  R_forceSymbols(dll, TRUE);
}
