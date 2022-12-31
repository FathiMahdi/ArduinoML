
    // !!! This file is generated using emlearn !!!

    #include <eml_trees.h>
    

EmlTreesNode model_nodes[37] = {
  { 0, 2.5, 1, 4 },
  { 0, 1.5, 2, 3 },
  { -1, 0, -1, -1 },
  { -1, 1, -1, -1 },
  { -1, 2, -1, -1 },
  { 0, 3.0, 2, 6 },
  { 0, 5.5, 7, 8 },
  { -1, 4, -1, -1 },
  { -1, 5, -1, -1 },
  { 0, 4.5, 10, 12 },
  { 0, 3.5, 4, 11 },
  { -1, 3, -1, -1 },
  { 0, 5.5, 7, 8 },
  { 0, 1.5, 2, 14 },
  { 0, 3.0, 3, 15 },
  { 0, 4.5, 11, 16 },
  { 0, 5.5, 7, 8 },
  { 0, 2.5, 3, 18 },
  { 0, 3.5, 4, 19 },
  { 0, 4.5, 11, 20 },
  { 0, 5.5, 7, 8 },
  { 0, 3.5, 22, 23 },
  { 0, 2.5, 3, 4 },
  { 0, 4.5, 11, 7 },
  { 0, 4.5, 25, 8 },
  { 0, 2.5, 26, 4 },
  { 0, 1.5, 2, 3 },
  { 0, 4.5, 28, 7 },
  { 0, 2.0, 2, 29 },
  { 0, 3.5, 4, 11 },
  { 0, 5.0, 31, 8 },
  { 0, 1.5, 2, 32 },
  { 0, 2.5, 3, 33 },
  { 0, 3.5, 4, 11 },
  { 0, 2.0, 2, 35 },
  { 0, 3.5, 4, 36 },
  { 0, 4.5, 11, 7 } 
};

int32_t model_tree_roots[10] = { 0, 5, 9, 13, 17, 21, 24, 27, 30, 34 };

EmlTrees model = {
        37,
        model_nodes,	  
        10,
        model_tree_roots,
    };

static inline int32_t model_predict_tree_0(const float *features, int32_t features_length) {
          if (features[0] < 2.5) {
              if (features[0] < 1.5) {
                  return 0;
              } else {
                  return 1;
              }
          } else {
              return 2;
          }
        }
        

static inline int32_t model_predict_tree_1(const float *features, int32_t features_length) {
          if (features[0] < 3.0) {
              return 0;
          } else {
              if (features[0] < 5.5) {
                  return 4;
              } else {
                  return 5;
              }
          }
        }
        

static inline int32_t model_predict_tree_2(const float *features, int32_t features_length) {
          if (features[0] < 4.5) {
              if (features[0] < 3.5) {
                  return 2;
              } else {
                  return 3;
              }
          } else {
              if (features[0] < 5.5) {
                  return 4;
              } else {
                  return 5;
              }
          }
        }
        

static inline int32_t model_predict_tree_3(const float *features, int32_t features_length) {
          if (features[0] < 1.5) {
              return 0;
          } else {
              if (features[0] < 3.0) {
                  return 1;
              } else {
                  if (features[0] < 4.5) {
                      return 3;
                  } else {
                      if (features[0] < 5.5) {
                          return 4;
                      } else {
                          return 5;
                      }
                  }
              }
          }
        }
        

static inline int32_t model_predict_tree_4(const float *features, int32_t features_length) {
          if (features[0] < 2.5) {
              return 1;
          } else {
              if (features[0] < 3.5) {
                  return 2;
              } else {
                  if (features[0] < 4.5) {
                      return 3;
                  } else {
                      if (features[0] < 5.5) {
                          return 4;
                      } else {
                          return 5;
                      }
                  }
              }
          }
        }
        

static inline int32_t model_predict_tree_5(const float *features, int32_t features_length) {
          if (features[0] < 3.5) {
              if (features[0] < 2.5) {
                  return 1;
              } else {
                  return 2;
              }
          } else {
              if (features[0] < 4.5) {
                  return 3;
              } else {
                  return 4;
              }
          }
        }
        

static inline int32_t model_predict_tree_6(const float *features, int32_t features_length) {
          if (features[0] < 4.5) {
              if (features[0] < 2.5) {
                  if (features[0] < 1.5) {
                      return 0;
                  } else {
                      return 1;
                  }
              } else {
                  return 2;
              }
          } else {
              return 5;
          }
        }
        

static inline int32_t model_predict_tree_7(const float *features, int32_t features_length) {
          if (features[0] < 4.5) {
              if (features[0] < 2.0) {
                  return 0;
              } else {
                  if (features[0] < 3.5) {
                      return 2;
                  } else {
                      return 3;
                  }
              }
          } else {
              return 4;
          }
        }
        

static inline int32_t model_predict_tree_8(const float *features, int32_t features_length) {
          if (features[0] < 5.0) {
              if (features[0] < 1.5) {
                  return 0;
              } else {
                  if (features[0] < 2.5) {
                      return 1;
                  } else {
                      if (features[0] < 3.5) {
                          return 2;
                      } else {
                          return 3;
                      }
                  }
              }
          } else {
              return 5;
          }
        }
        

static inline int32_t model_predict_tree_9(const float *features, int32_t features_length) {
          if (features[0] < 2.0) {
              return 0;
          } else {
              if (features[0] < 3.5) {
                  return 2;
              } else {
                  if (features[0] < 4.5) {
                      return 3;
                  } else {
                      return 4;
                  }
              }
          }
        }
        

int32_t model_predict(const float *features, int32_t features_length) {

        int32_t votes[6] = {0,};
        int32_t _class = -1;

        _class = model_predict_tree_0(features, features_length); votes[_class] += 1;
    _class = model_predict_tree_1(features, features_length); votes[_class] += 1;
    _class = model_predict_tree_2(features, features_length); votes[_class] += 1;
    _class = model_predict_tree_3(features, features_length); votes[_class] += 1;
    _class = model_predict_tree_4(features, features_length); votes[_class] += 1;
    _class = model_predict_tree_5(features, features_length); votes[_class] += 1;
    _class = model_predict_tree_6(features, features_length); votes[_class] += 1;
    _class = model_predict_tree_7(features, features_length); votes[_class] += 1;
    _class = model_predict_tree_8(features, features_length); votes[_class] += 1;
    _class = model_predict_tree_9(features, features_length); votes[_class] += 1;
    
        int32_t most_voted_class = -1;
        int32_t most_voted_votes = 0;
        for (int32_t i=0; i<6; i++) {

            if (votes[i] > most_voted_votes) {
                most_voted_class = i;
                most_voted_votes = votes[i];
            }
        }
        return most_voted_class;
    }
    