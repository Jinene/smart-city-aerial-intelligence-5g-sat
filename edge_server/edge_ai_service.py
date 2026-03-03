import random

def analyze_frame(frame):
    if random.random() > 0.95:
        return "Anomaly Detected"
    return "Normal"
