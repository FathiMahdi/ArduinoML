from sklearn.ensemble import RandomForestClassifier
import emlearn
import pandas as pd
import numpy as np

dataset = 'data/dataset.csv'
lib_name = 'model'

# get the data form CSV files
data_frame = pd.read_csv(dataset)
#data_frame = data_frame.to_numpy()
print(data_frame)
X_train = data_frame.iloc[:,0]
Y_train = data_frame.iloc[:,1]
X_train =  X_train.to_numpy()
X_train = X_train.reshape(-1, 1)
Y_train =  Y_train.to_numpy()
print('X: ',X_train)
print('Y: ',Y_train)
# Model Fit
estimator = RandomForestClassifier(n_estimators=10, max_depth=10)
estimator.fit(X_train, Y_train)


# convert model to c code
cmodel = emlearn.convert(estimator, method='inline')
cmodel.save(file='{}.h'.format(lib_name))