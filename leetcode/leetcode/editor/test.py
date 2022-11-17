str='''
| `step`: Number of samples
| `time`: Time spent from the start of training to this moment.
| `avgR`: Average value of cumulative rewards, which is the sum of rewards in an episode.
| `stdR`: Standard dev of cumulative rewards, which is the sum of rewards in an episode.
| `avgS`: Average of steps in an episode.
| `objC`: Objective of Critic network. Or call it loss function of critic network.
| `objA`: Objective of Actor network. It is the average Q value of the critic network.
env_args = {'env_name': 'CartPole-v0',
            'state_dim': 4,
            'action_dim': 2,
            'if_discrete': True}
|     step      time  |     avgR    stdR    avgS  |     objC      objA
| 2.05e+04        60  |     9.38    0.82       9  |     5.79     85.69
| 4.10e+04       182  |   157.41   29.16     157  |     0.73     20.82
| 6.14e+04       320  |   138.72   23.36     139  |     0.31     19.65
| 8.19e+04       471  |   106.91   11.28     107  |     0.21     19.49

env_args = {'env_name': 'LunarLander-v2',
            'state_dim': 8,
            'action_dim': 4,
            'if_discrete': True}
|     step      time  |     avgR    stdR    avgS  |     objC      objA
| 2.05e+04       142  |   -30.49   19.97    1000  |     1.91     20.09
| 8.19e+04       791  |   -27.40   19.82    1000  |     2.30     16.74
| 1.43e+05      1892  |   -54.18  125.79     819  |     2.21     11.73
| 2.05e+05      3480  |   -12.79   70.03     933  |     1.71     15.49
| 2.66e+05      5304  |   167.56  102.91     481  |     1.14     41.37
| 3.28e+05      7443  |   145.19   88.17     664  |     1.18     20.50
| 3.89e+05      9672  |   232.74   35.30     475  |     0.86     18.23
| Save learning curve in ./LunarLander-v2_DQN_0/LearningCurve.jpg
| Press 'y' to load actor.pth and render:y
| render and load actor from: ./LunarLander-v2_DQN_0/actor_000000389120_00009672_00232.74.pth
| DDQN and D3QN train faster than DQN 
'''
print(str)