define dso_local i32 @RemoveDuplicates(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %12 = load i32, i32* %4
  store i32 %12, i32* %5
  store i32 0, i32* %6
  br label %14
14:
  %15 = load i32, i32* %6
  %16 = load i32, i32* %5
  %17 = icmp slt i32 %15, %16
  br i1 %17, label %20, label %18
18:
  store i32 2, i32* %7
  br label %84
20:
  %22 = load i32, i32* %6
  %23 = add nsw i32 %22, 1
  store i32 %23, i32* %8
  br label %24
24:
  %25 = load i32, i32* %8
  %26 = load i32, i32* %5
  %27 = icmp slt i32 %25, %26
  br i1 %27, label %30, label %28
28:
  store i32 5, i32* %7
  br label %80
30:
  %32 = load i32*, i32** %3
  %33 = load i32, i32* %6
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i32, i32* %32, i64 %34
  %36 = load i32, i32* %35
  %37 = load i32*, i32** %3
  %38 = load i32, i32* %8
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i32, i32* %37, i64 %39
  %41 = load i32, i32* %40
  %42 = icmp eq i32 %36, %41
  %43 = zext i1 %42 to i32
  store i32 %43, i32* %9
  %44 = load i32, i32* %9
  %45 = icmp ne i32 %44, 0
  br i1 %45, label %46, label %75
46:
  %48 = load i32, i32* %8
  store i32 %48, i32* %10
  br label %49
49:
  %50 = load i32, i32* %10
  %51 = load i32, i32* %5
  %52 = sub nsw i32 %51, 1
  %53 = icmp slt i32 %50, %52
  br i1 %53, label %56, label %54
54:
  store i32 8, i32* %7
  br label %70
56:
  %57 = load i32*, i32** %3
  %58 = load i32, i32* %10
  %59 = add nsw i32 %58, 1
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %57, i64 %60
  %62 = load i32, i32* %61
  %63 = load i32*, i32** %3
  %64 = load i32, i32* %10
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i32, i32* %63, i64 %65
  store i32 %62, i32* %66
  br label %67
67:
  %68 = load i32, i32* %10
  %69 = add nsw i32 %68, 1
  store i32 %69, i32* %10
  br label %49
70:
  %71 = load i32, i32* %5
  %72 = add nsw i32 %71, -1
  store i32 %72, i32* %5
  %73 = load i32, i32* %8
  %74 = add nsw i32 %73, -1
  store i32 %74, i32* %8
  br label %75
75:
  br label %77
77:
  %78 = load i32, i32* %8
  %79 = add nsw i32 %78, 1
  store i32 %79, i32* %8
  br label %24
80:
  br label %81
81:
  %82 = load i32, i32* %6
  %83 = add nsw i32 %82, 1
  store i32 %83, i32* %6
  br label %14
84:
  %85 = load i32, i32* %5
  store i32 1, i32* %7
  ret i32 %85
}
