define dso_local i32 @uHn(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %8 = load i32*, i32** %3
  %9 = getelementptr inbounds i32, i32* %8, i64 0
  %10 = load i32, i32* %9
  store i32 %10, i32* %5
  store i32 1, i32* %6
  br label %12
12:
  %13 = load i32, i32* %6
  %14 = load i32, i32* %4
  %15 = sub nsw i32 %14, 1
  %16 = icmp slt i32 %13, %15
  br i1 %16, label %17, label %51
17:
  %18 = load i32*, i32** %3
  %19 = load i32, i32* %6
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i32, i32* %18, i64 %20
  %22 = load i32, i32* %21
  %23 = load i32, i32* %5
  %24 = icmp sgt i32 %22, %23
  br i1 %24, label %25, label %31
25:
  %26 = load i32*, i32** %3
  %27 = load i32, i32* %6
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i32, i32* %26, i64 %28
  %30 = load i32, i32* %29
  store i32 %30, i32* %5
  br label %31
31:
  %32 = load i32*, i32** %3
  %33 = load i32, i32* %6
  %34 = add nsw i32 %33, 1
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i32, i32* %32, i64 %35
  %37 = load i32, i32* %36
  %38 = load i32, i32* %5
  %39 = icmp sgt i32 %37, %38
  br i1 %39, label %40, label %47
40:
  %41 = load i32*, i32** %3
  %42 = load i32, i32* %6
  %43 = add nsw i32 %42, 1
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i32, i32* %41, i64 %44
  %46 = load i32, i32* %45
  store i32 %46, i32* %5
  br label %47
47:
  br label %48
48:
  %49 = load i32, i32* %6
  %50 = add nsw i32 %49, 2
  store i32 %50, i32* %6
  br label %12
51:
  br label %52
52:
  %53 = load i32, i32* %6
  %54 = load i32, i32* %4
  %55 = icmp slt i32 %53, %54
  br i1 %55, label %56, label %74
56:
  %57 = load i32*, i32** %3
  %58 = load i32, i32* %6
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i32, i32* %57, i64 %59
  %61 = load i32, i32* %60
  %62 = load i32, i32* %5
  %63 = icmp sgt i32 %61, %62
  br i1 %63, label %64, label %70
64:
  %65 = load i32*, i32** %3
  %66 = load i32, i32* %6
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i32, i32* %65, i64 %67
  %69 = load i32, i32* %68
  store i32 %69, i32* %5
  br label %70
70:
  br label %71
71:
  %72 = load i32, i32* %6
  %73 = add nsw i32 %72, 1
  store i32 %73, i32* %6
  br label %52
74:
  %75 = load i32, i32* %5
  ret i32 %75
}
