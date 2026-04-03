define dso_local void @TF(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %10 = load i32, i32* %4
  %11 = sdiv i32 %10, 2
  store i32 %11, i32* %5
  br label %12
12:
  %13 = load i32, i32* %5
  %14 = icmp sle i32 %13, 0
  br i1 %14, label %15, label %16
15:
  br label %69
16:
  %17 = load i32, i32* %5
  store i32 %17, i32* %6
  br label %18
18:
  %19 = load i32, i32* %6
  %20 = load i32, i32* %4
  %21 = icmp sge i32 %19, %20
  br i1 %21, label %22, label %25
22:
  %23 = load i32, i32* %5
  %24 = sdiv i32 %23, 2
  store i32 %24, i32* %5
  br label %12
25:
  %26 = load i32*, i32** %3
  %27 = load i32, i32* %6
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i32, i32* %26, i64 %28
  %30 = load i32, i32* %29
  store i32 %30, i32* %7
  %31 = load i32, i32* %6
  store i32 %31, i32* %8
  br label %32
32:
  %33 = load i32, i32* %8
  %34 = load i32, i32* %5
  %35 = icmp sge i32 %33, %34
  br i1 %35, label %36, label %61
36:
  %37 = load i32*, i32** %3
  %38 = load i32, i32* %8
  %39 = load i32, i32* %5
  %40 = sub nsw i32 %38, %39
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i32, i32* %37, i64 %41
  %43 = load i32, i32* %42
  %44 = load i32, i32* %7
  %45 = icmp sgt i32 %43, %44
  br i1 %45, label %46, label %61
46:
  %47 = load i32*, i32** %3
  %48 = load i32, i32* %8
  %49 = load i32, i32* %5
  %50 = sub nsw i32 %48, %49
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i32, i32* %47, i64 %51
  %53 = load i32, i32* %52
  %54 = load i32*, i32** %3
  %55 = load i32, i32* %8
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i32, i32* %54, i64 %56
  store i32 %53, i32* %57
  %58 = load i32, i32* %5
  %59 = load i32, i32* %8
  %60 = sub nsw i32 %59, %58
  store i32 %60, i32* %8
  br label %32
61:
  %62 = load i32, i32* %7
  %63 = load i32*, i32** %3
  %64 = load i32, i32* %8
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i32, i32* %63, i64 %65
  store i32 %62, i32* %66
  %67 = load i32, i32* %6
  %68 = add nsw i32 %67, 1
  store i32 %68, i32* %6
  br label %18
69:
  ret void
}
