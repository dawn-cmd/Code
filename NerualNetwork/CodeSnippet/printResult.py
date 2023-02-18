import matplotlib.pyplot as plt


def printResult(history, metric):
    plt.plot(history.history[metric])
    plt.plot(history.history["val_"+metric], '')
    plt.xlabel("Epochs")
    plt.ylabel(metric)
    plt.legend([metric, 'val_'+metric], loc="lower right")
    plt.show()
    
    