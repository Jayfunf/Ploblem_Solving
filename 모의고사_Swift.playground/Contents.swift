import Foundation

func solution(_ answers:[Int]) -> [Int] {
    var answer:[Int] = []
    var one = [1,2,3,4,5]
    var two = [2,1,2,3,2,4,2,5]
    var thr = [3,3,1,1,2,2,4,4,5,5]
    var ans1: Int = 0
    var ans2: Int = 0
    var ans3: Int = 0
    
    for i in 0..<answers.count{
        if answers[i] == one[i%5]{
            ans1+=1
        }
        if answers[i] == two[i%8]{
            ans2+=1
        }
        if answers[i] == thr[i%10]{
            ans3+=1
        }
    }
    let maxT: Int = max(ans1, max(ans2, ans3))
    
    if maxT == ans1{
        answer.append(1)
    }
    if maxT == ans2{
        answer.append(2)
    }
    if maxT == ans3{
        answer.append(3)
    }
    
    return answer
}
