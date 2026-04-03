define dso_local void @NIOf(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 1, i32* %5
  br label %9
9:
  br label %10
10:
  %11 = load i32, i32* %5
  %12 = load i32, i32* %4
  %13 = icmp sge i32 %11, %12
  br i1 %13, label %14, label %15
14:
  br label %62
15:
  %17 = load i32*, i32** %3
  %18 = load i32, i32* %5
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i32, i32* %17, i64 %19
  %21 = load i32, i32* %20
  store i32 %21, i32* %6
  %23 = load i32, i32* %5
  %24 = sub nsw i32 %23, 1
  store i32 %24, i32* %7
  br label %25
25:
  br label %26
26:
  %27 = load i32, i32* %7
  %28 = icmp slt i32 %27, 0
  br i1 %28, label %37, label %29
29:
  %30 = load i32*, i32** %3
  %31 = load i32, i32* %7
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i32, i32* %30, i64 %32
  %34 = load i32, i32* %33
  %35 = load i32, i32* %6
  %36 = icmp sle i32 %34, %35
  br i1 %36, label %37, label %38
37:
  br label %51
38:
  %39 = load i32*, i32** %3
  %40 = load i32, i32* %7
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i32, i32* %39, i64 %41
  %43 = load i32, i32* %42
  %44 = load i32*, i32** %3
  %45 = load i32, i32* %7
  %46 = add nsw i32 %45, 1
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i32, i32* %44, i64 %47
  store i32 %43, i32* %48
  %49 = load i32, i32* %7
  %50 = add nsw i32 %49, -1
  store i32 %50, i32* %7
  br label %25
51:
  %52 = load i32, i32* %6
  %53 = load i32*, i32** %3
  %54 = load i32, i32* %7
  %55 = add nsw i32 %54, 1
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i32, i32* %53, i64 %56
  store i32 %52, i32* %57
  %58 = load i32, i32* %5
  %59 = add nsw i32 %58, 1
  store i32 %59, i32* %5
  br label %9
62:
  ret void
}
