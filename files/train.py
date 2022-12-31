from sklearn.ensemble import RandomForestClassifier
import emlearn
import pandas as pd

lib_name = 'model'

# get the data form CSV files
X_train = []
Y_train  = []
# Model Fit
estimator = RandomForestClassifier(n_estimators=10, max_depth=10)
estimator.fit(X_train, Y_train)


# convert model to c code
cmodel = emlearn.convert(estimator, method='inline')
cmodel.save(file='{}.h'.format(lib_name))