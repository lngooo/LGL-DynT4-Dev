define dso_local i32 @wCL(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %11 = load i32, i32* %4
  store i32 %11, i32* %5
  store i32 0, i32* %6
  br label %13
13:
  %14 = load i32, i32* %6
  %15 = load i32, i32* %5
  %16 = icmp slt i32 %14, %15
  br i1 %16, label %19, label %17
17:
  store i32 2, i32* %7
  br label %78
19:
  %21 = load i32, i32* %6
  %22 = add nsw i32 %21, 1
  store i32 %22, i32* %8
  br label %23
23:
  %24 = load i32, i32* %8
  %25 = load i32, i32* %5
  %26 = icmp slt i32 %24, %25
  br i1 %26, label %29, label %27
27:
  store i32 5, i32* %7
  br label %74
29:
  %30 = load i32*, i32** %3
  %31 = load i32, i32* %6
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i32, i32* %30, i64 %32
  %34 = load i32, i32* %33
  %35 = load i32*, i32** %3
  %36 = load i32, i32* %8
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i32, i32* %35, i64 %37
  %39 = load i32, i32* %38
  %40 = icmp eq i32 %34, %39
  br i1 %40, label %41, label %70
41:
  %43 = load i32, i32* %8
  store i32 %43, i32* %9
  br label %44
44:
  %45 = load i32, i32* %9
  %46 = load i32, i32* %5
  %47 = sub nsw i32 %46, 1
  %48 = icmp slt i32 %45, %47
  br i1 %48, label %51, label %49
49:
  store i32 8, i32* %7
  br label %65
51:
  %52 = load i32*, i32** %3
  %53 = load i32, i32* %9
  %54 = add nsw i32 %53, 1
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i32, i32* %52, i64 %55
  %57 = load i32, i32* %56
  %58 = load i32*, i32** %3
  %59 = load i32, i32* %9
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %58, i64 %60
  store i32 %57, i32* %61
  br label %62
62:
  %63 = load i32, i32* %9
  %64 = add nsw i32 %63, 1
  store i32 %64, i32* %9
  br label %44
65:
  %66 = load i32, i32* %5
  %67 = add nsw i32 %66, -1
  store i32 %67, i32* %5
  %68 = load i32, i32* %8
  %69 = add nsw i32 %68, -1
  store i32 %69, i32* %8
  br label %70
70:
  br label %71
71:
  %72 = load i32, i32* %8
  %73 = add nsw i32 %72, 1
  store i32 %73, i32* %8
  br label %23
74:
  br label %75
75:
  %76 = load i32, i32* %6
  %77 = add nsw i32 %76, 1
  store i32 %77, i32* %6
  br label %13
78:
  %79 = load i32, i32* %5
  store i32 1, i32* %7
  ret i32 %79
}
