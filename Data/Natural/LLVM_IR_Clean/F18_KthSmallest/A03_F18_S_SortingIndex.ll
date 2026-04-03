define dso_local i32 @KthSmallest(i32* %0, i32 %1, i32 %2, i32 %3) {
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  store i32 %3, i32* %8
  store i32 0, i32* %9
  br label %14
14:
  %15 = load i32, i32* %9
  %16 = load i32, i32* %7
  %17 = icmp slt i32 %15, %16
  br i1 %17, label %20, label %18
18:
  store i32 2, i32* %10
  br label %72
20:
  %22 = load i32, i32* %9
  %23 = add nsw i32 %22, 1
  store i32 %23, i32* %11
  br label %24
24:
  %25 = load i32, i32* %11
  %26 = load i32, i32* %7
  %27 = icmp sle i32 %25, %26
  br i1 %27, label %30, label %28
28:
  store i32 5, i32* %10
  br label %68
30:
  %31 = load i32*, i32** %5
  %32 = load i32, i32* %9
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i32, i32* %31, i64 %33
  %35 = load i32, i32* %34
  %36 = load i32*, i32** %5
  %37 = load i32, i32* %11
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i32, i32* %36, i64 %38
  %40 = load i32, i32* %39
  %41 = icmp sgt i32 %35, %40
  br i1 %41, label %42, label %64
42:
  %44 = load i32*, i32** %5
  %45 = load i32, i32* %9
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i32, i32* %44, i64 %46
  %48 = load i32, i32* %47
  store i32 %48, i32* %12
  %49 = load i32*, i32** %5
  %50 = load i32, i32* %11
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i32, i32* %49, i64 %51
  %53 = load i32, i32* %52
  %54 = load i32*, i32** %5
  %55 = load i32, i32* %9
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i32, i32* %54, i64 %56
  store i32 %53, i32* %57
  %58 = load i32, i32* %12
  %59 = load i32*, i32** %5
  %60 = load i32, i32* %11
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i32, i32* %59, i64 %61
  store i32 %58, i32* %62
  br label %64
64:
  br label %65
65:
  %66 = load i32, i32* %11
  %67 = add nsw i32 %66, 1
  store i32 %67, i32* %11
  br label %24
68:
  br label %69
69:
  %70 = load i32, i32* %9
  %71 = add nsw i32 %70, 1
  store i32 %71, i32* %9
  br label %14
72:
  %73 = load i32*, i32** %5
  %74 = load i32, i32* %8
  %75 = sub nsw i32 %74, 1
  %76 = sext i32 %75 to i64
  %77 = getelementptr inbounds i32, i32* %73, i64 %76
  %78 = load i32, i32* %77
  ret i32 %78
}
