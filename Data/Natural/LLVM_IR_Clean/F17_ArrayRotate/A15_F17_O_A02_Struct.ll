%struct.RotState = type { i32, i32, i32 }
define dso_local i32 @gcd(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %5 = load i32, i32* %4
  %6 = icmp eq i32 %5, 0
  br i1 %6, label %7, label %9
7:
  %8 = load i32, i32* %3
  br label %15
9:
  %10 = load i32, i32* %4
  %11 = load i32, i32* %3
  %12 = load i32, i32* %4
  %13 = srem i32 %11, %12
  %14 = call i32 @gcd(i32 %10, i32 %13)
  br label %15
15:
  %16 = phi i32 [ %8, %7 ], [ %14, %9 ]
  ret i32 %16
}
define dso_local void @ArrayRotate(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca %struct.RotState
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %13 = load i32, i32* %5
  %14 = icmp eq i32 %13, 0
  br i1 %14, label %15, label %16
15:
  br label %89
16:
  %18 = getelementptr inbounds %struct.RotState, %struct.RotState* %7, i32 0, i32 0
  %19 = load i32, i32* %5
  store i32 %19, i32* %18
  %20 = getelementptr inbounds %struct.RotState, %struct.RotState* %7, i32 0, i32 1
  %21 = load i32, i32* %6
  %22 = load i32, i32* %5
  %23 = srem i32 %21, %22
  store i32 %23, i32* %20
  %24 = getelementptr inbounds %struct.RotState, %struct.RotState* %7, i32 0, i32 2
  %25 = load i32, i32* %6
  %26 = load i32, i32* %5
  %27 = srem i32 %25, %26
  %28 = load i32, i32* %5
  %29 = call i32 @gcd(i32 %27, i32 %28)
  store i32 %29, i32* %24
  store i32 0, i32* %8
  br label %31
31:
  %32 = load i32, i32* %8
  %33 = getelementptr inbounds %struct.RotState, %struct.RotState* %7, i32 0, i32 2
  %34 = load i32, i32* %33
  %35 = icmp slt i32 %32, %34
  br i1 %35, label %38, label %36
36:
  store i32 2, i32* %9
  br label %87
38:
  %40 = load i32*, i32** %4
  %41 = load i32, i32* %8
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i32, i32* %40, i64 %42
  %44 = load i32, i32* %43
  store i32 %44, i32* %10
  %46 = load i32, i32* %8
  store i32 %46, i32* %11
  br label %47
47:
  br label %48
48:
  %50 = load i32, i32* %11
  %51 = getelementptr inbounds %struct.RotState, %struct.RotState* %7, i32 0, i32 1
  %52 = load i32, i32* %51
  %53 = add nsw i32 %50, %52
  %54 = getelementptr inbounds %struct.RotState, %struct.RotState* %7, i32 0, i32 0
  %55 = load i32, i32* %54
  %56 = srem i32 %53, %55
  store i32 %56, i32* %12
  %57 = load i32, i32* %12
  %58 = load i32, i32* %8
  %59 = icmp eq i32 %57, %58
  br i1 %59, label %60, label %61
60:
  store i32 6, i32* %9
  br label %72
61:
  %62 = load i32*, i32** %4
  %63 = load i32, i32* %12
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i32, i32* %62, i64 %64
  %66 = load i32, i32* %65
  %67 = load i32*, i32** %4
  %68 = load i32, i32* %11
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i32, i32* %67, i64 %69
  store i32 %66, i32* %70
  %71 = load i32, i32* %12
  store i32 %71, i32* %11
  store i32 0, i32* %9
  br label %72
72:
  %74 = load i32, i32* %9
  switch i32 %74, label %90 [
    i32 0, label %75
    i32 6, label %76
  ]
75:
  br label %47
76:
  %77 = load i32, i32* %10
  %78 = load i32*, i32** %4
  %79 = load i32, i32* %11
  %80 = sext i32 %79 to i64
  %81 = getelementptr inbounds i32, i32* %78, i64 %80
  store i32 %77, i32* %81
  br label %84
84:
  %85 = load i32, i32* %8
  %86 = add nsw i32 %85, 1
  store i32 %86, i32* %8
  br label %31
87:
  br label %89
89:
  ret void
90:
  unreachable
}
